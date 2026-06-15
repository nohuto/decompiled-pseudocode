/*
 * XREFs of ?QueryInterface@CMonitor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801041D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BC05C (WPP_SF_d.c)
 */

__int64 __fastcall CMonitor::QueryInterface(CMonitor *this, const struct _GUID *a2, CMonitor **a3)
{
  CMonitor *v4; // rdi
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
      (*(void (__fastcall **)(CMonitor *))(*(_QWORD *)this + 8LL))(this);
      v6 = 0;
    }
    *a3 = v4;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v6 < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x41u, (__int64)&WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, v6);
  }
  return (unsigned int)v6;
}
