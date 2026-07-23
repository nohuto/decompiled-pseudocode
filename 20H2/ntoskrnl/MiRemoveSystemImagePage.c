/*
 * XREFs of MiRemoveSystemImagePage @ 0x1403200E8
 * Callers:
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiMakeDriverPageStayResident @ 0x14052C354 (MiMakeDriverPageStayResident.c)
 * Callees:
 *     MiTerminateWsle @ 0x1402BA000 (MiTerminateWsle.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a2 << 25 >> 16;
  if ( PsNtosImageBase
    && (v4 < PsNtosImageEnd && v4 >= (unsigned __int64)PsNtosImageBase
     || v4 < PsHalImageEnd && v4 >= (unsigned __int64)PsHalImageBase) )
  {
    v5 = (volatile signed __int32 *)&xmmword_140C4CBC8 + 2;
  }
  else
  {
    v5 = (volatile signed __int32 *)&xmmword_140C4CBC8 + 3;
  }
  _InterlockedDecrement(v5);
  result = MiTerminateWsle(a1, v4, 2, &v10);
  v11 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      KeYieldProcessorEx(&v11, v7, v8, v9);
      result = *(_QWORD *)(a3 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
