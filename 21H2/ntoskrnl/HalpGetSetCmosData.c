/*
 * XREFs of HalpGetSetCmosData @ 0x1404CC4CC
 * Callers:
 *     HalSetBusDataByOffset @ 0x14039E9B0 (HalSetBusDataByOffset.c)
 *     HalGetBusDataByOffset @ 0x14039EAD0 (HalGetBusDataByOffset.c)
 *     HalpGetCmosData @ 0x1404CC4B0 (HalpGetCmosData.c)
 *     HalpSetCmosData @ 0x1404CC590 (HalpSetCmosData.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14023430C (HalpAcquireCmosSpinLock.c)
 *     HalpCmosReadByte @ 0x1403652E0 (HalpCmosReadByte.c)
 *     HalpCmosWriteByte @ 0x140365300 (HalpCmosWriteByte.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetSetCmosData(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE *v5; // rdi
  unsigned int v6; // esi
  unsigned int v8; // ebx
  __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v11; // rdx

  v5 = (_BYTE *)a3;
  v6 = a2;
  if ( (unsigned int)a1 >= 2 )
    return 0LL;
  v8 = a2;
  v9 = 3LL * (unsigned int)a1;
  v10 = *((_DWORD *)&HalpCmosBusParameterTable + 6 * (unsigned int)a1);
  if ( (int)a2 + a4 - 1 <= v10 )
    v10 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  if ( v6 <= v10 )
  {
    if ( a5 )
    {
      do
      {
        LOBYTE(v11) = *v5;
        ((void (__fastcall *)(_QWORD, __int64))funcs_1404CC542[v9])(v8, v11);
        ++v5;
        ++v8;
      }
      while ( v8 <= v10 );
    }
    else
    {
      do
        *v5++ = ((__int64 (__fastcall *)(_QWORD))funcs_1404CC527[v9])(v8++);
      while ( v8 <= v10 );
    }
  }
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return v8 - v6;
}
