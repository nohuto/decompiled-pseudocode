/*
 * XREFs of ?IsValidTelephonyInstance@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x18013FED0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology::IsValidTelephonyInstance(
        PhoneTopology *this,
        struct _TelephonyInstanceData *a2,
        int *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax

  v3 = 0;
  if ( a2 && a3 )
  {
    v4 = *((_QWORD *)this + 3);
    if ( v4 )
    {
      if ( *(int *)a2 < 3 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 32LL))(v4);
        if ( v5 < 0 )
          return (unsigned int)v5;
      }
      else
      {
        return (unsigned int)-2147024809;
      }
    }
    else
    {
      return (unsigned int)-2147418113;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
