/*
 * XREFs of ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0007AC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x1C000860C (--1CMouseProcessor@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall CMouseSensor::PreUninitialize(CMouseSensor *this)
{
  __int64 v1; // rbx

  v1 = *((_QWORD *)this + 218);
  if ( v1 )
  {
    CMouseProcessor::~CMouseProcessor(*((CMouseProcessor **)this + 218));
    Win32FreePool(v1);
  }
  *((_QWORD *)this + 218) = 0LL;
}
