/*
 * XREFs of IommuDeviceDelete @ 0x14090AA30
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDeviceDelete(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) || *(_QWORD *)(a1 + 48) )
    return 3221227272LL;
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) != 2 )
    return (unsigned int)HalpIommuDeleteDevice((__int64 *)a1);
  return v1;
}
