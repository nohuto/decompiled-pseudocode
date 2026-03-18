/*
 * XREFs of MiInitializeEnclave @ 0x1408CE640
 * Callers:
 *     NtInitializeEnclave @ 0x1408CF820 (NtInitializeEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     KeInitializeEnclave @ 0x1408B72C8 (KeInitializeEnclave.c)
 *     MiInitializeVsmEnclave @ 0x1408CE748 (MiInitializeVsmEnclave.c)
 *     MiReturnReservedEnclavePages @ 0x1409AD090 (MiReturnReservedEnclavePages.c)
 */

__int64 __fastcall MiInitializeEnclave(PEPROCESS Process, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5)
{
  volatile signed __int32 *v8; // rax
  __int64 v9; // r8
  volatile signed __int32 *v10; // rdi
  int v12; // ebx
  int v13; // eax
  int v14; // [rsp+20h] [rbp-28h]
  unsigned int v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0;
  v8 = MiObtainReferencedVadEx(a2, 0, (int *)v15);
  v10 = v8;
  if ( !v8 )
    return v15[0];
  if ( (v8[12] & 0x3100000) == 0x2100000 )
  {
    v13 = *((_DWORD *)v8 + 16);
    if ( (v13 & 2) != 0 )
    {
      v12 = -1073740528;
    }
    else if ( (v13 & 1) != 0 )
    {
      if ( a4 == 4096 )
      {
        v12 = KeInitializeEnclave((__int64)(*((_QWORD *)v10 + 10) << 25) >> 16, a3, v9, a3 + 2048, v14, a5);
        if ( v12 >= 0 )
        {
          MiReturnReservedEnclavePages(v10, -1LL);
          *((_DWORD *)v10 + 16) |= 2u;
          v12 = 0;
        }
      }
      else
      {
        v12 = -1073741820;
      }
    }
    else
    {
      v12 = MiInitializeVsmEnclave(Process);
    }
  }
  else
  {
    v12 = -1073741800;
  }
  MiUnlockAndDereferenceVad((char *)v10);
  return (unsigned int)v12;
}
