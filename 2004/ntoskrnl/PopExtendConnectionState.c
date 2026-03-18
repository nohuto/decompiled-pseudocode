/*
 * XREFs of PopExtendConnectionState @ 0x1407BF9B4
 * Callers:
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopInitializeAdpm @ 0x140A6EF78 (PopInitializeAdpm.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopExtendConnectionState(unsigned int a1)
{
  unsigned int v1; // ebx
  PVOID result; // rax
  void *v3; // rdi
  PVOID v4; // rsi

  if ( PopMaximumConnectionSessions )
  {
    if ( 2 * PopMaximumConnectionSessions <= a1 )
      v1 = (a1 + 8) >> 3;
    else
      v1 = (unsigned int)PopMaximumConnectionSessions >> 2;
  }
  else
  {
    v1 = 8;
  }
  result = ExAllocatePoolWithTag(PagedPool, v1, 0x73655350u);
  v3 = result;
  if ( result )
  {
    memset(result, 0, v1);
    v4 = PopConnectionState;
    if ( PopConnectionState )
    {
      memmove(v3, PopConnectionState, (unsigned __int64)(unsigned int)PopMaximumConnectionSessions >> 3);
      ExFreePoolWithTag(v4, 0x73655350u);
    }
    PopConnectionState = v3;
    result = (PVOID)(8 * v1);
    PopMaximumConnectionSessions = 8 * v1;
    PopConnectionBitmap.SizeOfBitMap = 8 * v1;
    PopConnectionBitmap.Buffer = (unsigned int *)v3;
  }
  else
  {
    PopMaximumConnectionSessions = 0;
  }
  return result;
}
