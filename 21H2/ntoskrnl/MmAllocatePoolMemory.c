/*
 * XREFs of MmAllocatePoolMemory @ 0x140315E28
 * Callers:
 *     RtlpHpEnvAllocVA @ 0x140315C7C (RtlpHpEnvAllocVA.c)
 * Callees:
 *     MiReservePoolMemory @ 0x140231024 (MiReservePoolMemory.c)
 *     MmFreePoolMemory @ 0x140305598 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x140315F7C (MiCommitPoolMemory.c)
 *     MiInitializePoolCommitPacket @ 0x140316928 (MiInitializePoolCommitPacket.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MmAllocatePoolMemory(ULONG_PTR *a1, unsigned __int64 *a2, int a3, int a4, char a5)
{
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  int v11; // edi
  char v12; // al
  int v14; // edx
  __int64 v15; // rax
  _BYTE v16[80]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  v8 = a3 & 0x7F;
  if ( (a3 & 0x7F) == 0 || v8 > (unsigned __int16)KeNumberNodes )
    return 3221225713LL;
  v9 = v8 - 1;
  v10 = a3 & 0xFFFFFF80;
  if ( (v10 & 0x2000) != 0 )
  {
    *a1 = 0LL;
    if ( (a5 & 1) != 0 )
      v14 = (a5 & 0x20) != 0 ? 1 : 6;
    else
      v14 = 5;
    v15 = MiReservePoolMemory(0LL, v14, *a2, v9);
    if ( !v15 )
      return 3221225495LL;
    *a1 = v15;
  }
  v11 = 0;
  if ( (v10 & 0x1000) != 0 )
  {
    v12 = a5 & 0xDF;
    if ( (a5 & 1) != 0 )
      v12 = a5;
    v11 = MiInitializePoolCommitPacket((_DWORD)a1, (_DWORD)a2, v10, a4, v12, v9, 0LL, (__int64)v16);
    if ( v11 < 0 || (v11 = MiCommitPoolMemory(v16), v11 < 0) )
    {
      if ( (v10 & 0x2000) != 0 )
        MmFreePoolMemory(a1, a2, 0x8000u);
      *a1 = 0LL;
    }
    *a2 = (*a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  }
  return (unsigned int)v11;
}
