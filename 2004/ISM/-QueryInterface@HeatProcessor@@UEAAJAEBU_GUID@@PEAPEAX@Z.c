/*
 * XREFs of ?QueryInterface@HeatProcessor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180189810
 * Callers:
 *     ?QueryInterface@HeatProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D0E0 (-QueryInterface@HeatProcessor@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HeatProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D0F0 (-QueryInterface@HeatProcessor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@HeatProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D100 (-QueryInterface@HeatProcessor@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::QueryInterface(HeatProcessor *this, const struct _GUID *a2, HeatProcessor **a3)
{
  HeatProcessor *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rax

  v4 = this;
  if ( !a3 )
    return 2147942487LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v6 )
  {
    (*(void (__fastcall **)(HeatProcessor *))(*(_QWORD *)this + 8LL))(this);
    v4 = (HeatProcessor *)((char *)v4 + 24);
LABEL_11:
    *a3 = v4;
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3cc27501_dfa8_48b9_9841_43a516320b1d.Data4;
  if ( !v7 )
  {
    (*(void (__fastcall **)(HeatProcessor *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_11;
  }
  return 2147500034LL;
}
