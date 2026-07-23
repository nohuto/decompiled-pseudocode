/*
 * XREFs of KdpInitializeExtendedContext @ 0x1409BAC74
 * Callers:
 *     KdpGetContext @ 0x1409B8628 (KdpGetContext.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KdpInitializeExtendedContext(_DWORD *a1, int a2)
{
  _DWORD *v2; // rdi
  __int64 result; // rax
  unsigned int v4; // ebx
  int v5; // eax

  v2 = a1 + 308;
  a1[12] = a2;
  a1[311] = 1232;
  a1[309] = 1256;
  result = 1048640LL;
  a1[310] = -1232;
  a1[308] = -1232;
  if ( (a2 & 0x100040) == 0x100040 )
  {
    memset((void *)(((unsigned __int64)a1 + 1319) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    v4 = (((_DWORD)v2 + 87) & 0xFFFFFFC0) - (_DWORD)v2;
    v2[4] = v4;
    v5 = MEMORY[0xFFFFF780000003E8] - 512;
    v2[5] = MEMORY[0xFFFFF780000003E8] - 512;
    result = v4 + v5 - *v2;
    v2[1] = result;
  }
  return result;
}
