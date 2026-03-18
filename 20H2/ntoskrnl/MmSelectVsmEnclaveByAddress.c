/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x1408D64B4
 * Callers:
 *     PsCallEnclave @ 0x14090FA20 (PsCallEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027C760 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14027CA80 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v4; // rax
  volatile signed __int32 *v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v10 = HIDWORD(a1);
  v9 = 0;
  v4 = MiObtainReferencedVadEx(a2, 0, (int *)&v9);
  v5 = v4;
  if ( !v4 )
    return v9;
  v7 = *((_DWORD *)v4 + 12);
  v8 = -1073741800;
  v9 = -1073741800;
  if ( (v7 & 0x100000) != 0 && (v7 & 0x1000000) == 0 && (v7 & 0x2000000) != 0 && (v5[16] & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v5 + 9) + 16LL)) <= 1 )
      __fastfail(0xEu);
    v8 = 0;
    *a3 = *((_QWORD *)v5 + 9);
  }
  MiUnlockAndDereferenceVad((PVOID)v5);
  return v8;
}
