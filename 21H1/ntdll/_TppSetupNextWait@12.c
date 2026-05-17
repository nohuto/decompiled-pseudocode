/*
 * XREFs of _TppSetupNextWait@12 @ 0x4B2B7C92
 * Callers:
 *     _TppWaitCompletion@16 @ 0x4B2B5530 (_TppWaitCompletion@16.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 * Callees:
 *     _TppSetTimer@20 @ 0x4B2B3EA0 (_TppSetTimer@20.c)
 *     _ZwAssociateWaitCompletionPacket@32 @ 0x4B2F3280 (_ZwAssociateWaitCompletionPacket@32.c)
 *     _TppRaiseHandleStatus@16 @ 0x4B384839 (_TppRaiseHandleStatus@16.c)
 */

int __fastcall TppSetupNextWait(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // ebx
  int v5; // ecx
  _DWORD *v6; // edi
  int v8; // edx
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  unsigned int v13; // [esp+14h] [ebp-10h]
  char v14; // [esp+23h] [ebp-1h] BYREF

  v3 = (int)a1;
  v4 = a1[23];
  a1[56] = a2;
  if ( (int)ZwAssociateWaitCompletionPacket(a1[57], *(_DWORD *)(v4 + 40), a2, a1 + 62, a1, 0, 0, &v14) < 0 )
  {
    *(_DWORD *)(v3 + 224) = 0;
    TppRaiseHandleStatus(v3, v5);
  }
  v6 = a3;
  if ( !a3 || v14 )
    return 1;
  v8 = a3[1];
  v13 = *a3;
  if ( v8 < 0 )
  {
    v10 = -*a3;
    v9 = -*(_QWORD *)a3 >> 32;
  }
  else
  {
    while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
      _mm_pause();
    v3 = (int)a1;
    v6 = a3;
    if ( __SPAIR64__(v8, v13) <= MEMORY[0x7FFE0014] )
    {
      v10 = 0;
      v9 = 0;
    }
    else
    {
      v9 = (__PAIR64__(v8, v13) - MEMORY[0x7FFE0014]) >> 32;
      v10 = v13 - MEMORY[0x7FFE0014];
    }
  }
  v11 = __PAIR64__(v9, v10) >> 16;
  if ( __PAIR64__(HIWORD(v9), v11) > 0x12C )
    v11 = 300;
  TppSetTimer(v3, v4 + 64, v6, 0, v11);
  return 2;
}
