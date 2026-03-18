/*
 * XREFs of ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C01479A8
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00990B0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

DEVICE_PFTOBJ *__fastcall DEVICE_PFTOBJ::DEVICE_PFTOBJ(DEVICE_PFTOBJ *this)
{
  _QWORD *v1; // rbx
  int v3; // eax

  v1 = 0LL;
  if ( qword_1C02576A0 )
    v3 = qword_1C02576A0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 )
  {
    if ( qword_1C02576A8 )
      v1 = (_QWORD *)qword_1C02576A8();
    *(_QWORD *)this = *v1;
  }
  return this;
}
