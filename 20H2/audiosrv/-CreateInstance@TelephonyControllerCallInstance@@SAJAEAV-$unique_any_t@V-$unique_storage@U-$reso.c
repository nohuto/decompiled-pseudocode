/*
 * XREFs of ?CreateInstance@TelephonyControllerCallInstance@@SAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180142ECC
 * Callers:
 *     ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x180140E80 (-CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyContr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@TelephonyControllerCallInstance@@IEAAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AX_K@Z$1?ReleaseAudioResourceHandle@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIKsControl@@PEAU_TelephonyInstanceData@@@Z @ 0x180143184 (-Initialize@TelephonyControllerCallInstance@@IEAAJAEAV-$unique_any_t@V-$unique_storage@U-$resour.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyControllerCallInstance::CreateInstance(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // esi
  _DWORD *v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  int v9; // eax

  v5 = 0;
  v6 = 0LL;
  if ( !a4 )
  {
    v5 = -2147467261;
    goto LABEL_9;
  }
  *a4 = 0LL;
  v7 = operator new(0x38uLL);
  v8 = v7;
  if ( v7 )
  {
    v7[4] = 1;
    *(_QWORD *)v7 = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
    *((_QWORD *)v7 + 1) = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
    *((_QWORD *)v7 + 3) = 0LL;
    *((_QWORD *)v7 + 4) = 0LL;
    v7[10] = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[13] = 0;
    v6 = v7;
    v9 = TelephonyControllerCallInstance::Initialize((TelephonyControllerCallInstance *)v7);
    if ( v9 < 0 )
    {
      v5 = v9;
      goto LABEL_9;
    }
    *a4 = v8;
  }
  else
  {
    v5 = -2147024882;
  }
  v6 = 0LL;
LABEL_9:
  if ( v6 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
  return v5;
}
