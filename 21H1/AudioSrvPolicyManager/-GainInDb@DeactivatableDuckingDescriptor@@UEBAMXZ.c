/*
 * XREFs of ?GainInDb@DeactivatableDuckingDescriptor@@UEBAMXZ @ 0x180014480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

float __fastcall DeactivatableDuckingDescriptor::GainInDb(DeactivatableDuckingDescriptor *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3)) )
    return *(float *)(*((_QWORD *)this + 1) + 8LL);
  else
    return 0.0;
}
