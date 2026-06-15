/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800143E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2 )
    goto LABEL_11;
  if ( a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    return v3;
  }
  if ( !*a2
    && a2[1] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    v4 = 0;
  }
  else
  {
LABEL_11:
    v4 = -2147467262;
    a1 = 0LL;
  }
  if ( v4 >= 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return (unsigned int)v4;
}
