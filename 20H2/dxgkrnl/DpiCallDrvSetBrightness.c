/*
 * XREFs of DpiCallDrvSetBrightness @ 0x1C02D0740
 * Callers:
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02CECE4 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     ?DpiBrightnessIfSet@@YAJPEAXE@Z @ 0x1C02CFD00 (-DpiBrightnessIfSet@@YAJPEAXE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C00394AC (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiCallDrvSetBrightness(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  __int64 v3; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r9
  __int16 v7; // ax
  __int64 v8; // r8
  int v9; // esi
  __int64 (__fastcall *v10)(__int64, __int64, __int64, _QWORD *); // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_WORD *)(v3 + 4738);
  v8 = v3 + 4736;
  if ( v7 == 2 )
    v5 = (_QWORD *)(v3 + 4736);
  if ( v7 == 1 )
    v6 = (_QWORD *)(v3 + 4736);
  if ( (!v5 || !v5[4]) && (!v6 || !v6[4]) )
    return 3221225659LL;
  v9 = *(unsigned __int8 *)(v3 + 4368);
  if ( v5 && v5[4] )
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v5[5];
    v11 = v5[1];
  }
  else
  {
    v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *))v6[5];
    v11 = v6[1];
  }
  LOBYTE(v3) = v2;
  v12 = v10(v11, v3, v8, v6);
  v15 = v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(v13, &EventBrightness, v14, a1, v9, v2, v12);
  return v15;
}
