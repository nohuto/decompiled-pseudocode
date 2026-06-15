/*
 * XREFs of ?QueryInterface@CMeterControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BE1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMeterControlBase::QueryInterface(
        CMeterControlBase *this,
        const struct _GUID *a2,
        CMeterControlBase **a3)
{
  CMeterControlBase *v4; // rdi
  __int64 v5; // rax
  int v6; // ebx

  v4 = this;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v6 = -2147467262;
      v4 = 0LL;
    }
    else
    {
      (*(void (__fastcall **)(CMeterControlBase *))(*(_QWORD *)this + 8LL))(this);
      v6 = 0;
    }
    *a3 = v4;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CMeterControlBase::QueryInterface", 133, v6);
  return (unsigned int)v6;
}
