/*
 * XREFs of ?ndisIfReadInterfaceAddDeviceParameters@@YAJAEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0100188
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031330 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115508 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0031CD0 (-RtlStringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ndisLWMGetConfigurationStore @ 0x1C00F8694 (ndisLWMGetConfigurationStore.c)
 *     ??1KRegKey@@QEAA@XZ @ 0x1C00F8790 (--1KRegKey@@QEAA@XZ.c)
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C01005A0 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z @ 0x1C01010F8 (-Initialize@KString@Rtl@@SAPEAU12@PEB_W@Z.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C01019AC (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B94 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ndisIfReadHiddenFlag @ 0x1C0106C3C (ndisIfReadHiddenFlag.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B4A8 (ndisIfOpenInterfaceRegistryKey.c)
 */

__int64 __fastcall ndisIfReadInterfaceAddDeviceParameters(
        struct NDIS_MINIPORT_CREATION_CONFIG *a1,
        struct _DEVICE_OBJECT *a2)
{
  int v4; // ebx
  struct Rtl::KString *v5; // rax
  void *v6; // rcx
  KRegKey *v8; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v9; // [rsp+78h] [rbp-41h] BYREF
  KRegKey v10; // [rsp+80h] [rbp-39h] BYREF
  wchar_t v11[48]; // [rsp+90h] [rbp-29h] BYREF

  v10.m_ptr = 0LL;
  v4 = ndisIfOpenInterfaceRegistryKey((struct _GUID *)a1, &v10, 1u, PropertyBag);
  if ( v4 >= 0 )
  {
    v8 = &v10;
    if ( (unsigned int)NetSetupPropertyBag::ReadUint64(
                         (NetSetupPropertyBag *)&v8,
                         (const struct _NETSETUPPROPKEY *)&unk_1C00CC9E0,
                         (unsigned __int64 *)a1 + 2) )
      goto LABEL_17;
    if ( !(unsigned int)NetSetupPropertyBag::ReadUint32(
                          (NetSetupPropertyBag *)&v8,
                          (const struct _NETSETUPPROPKEY *)&unk_1C00CC9B0,
                          (unsigned int *)a1 + 11) )
      *((_BYTE *)a1 + 40) = 1;
    v9 = 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadUint32(
                         (NetSetupPropertyBag *)&v8,
                         (const struct _NETSETUPPROPKEY *)&unk_1C00CC9F8,
                         &v9) )
      goto LABEL_17;
    *((_BYTE *)a1 + 72) = (v9 & 2) != 0;
    if ( (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v8,
                         (const struct _NETSETUPPROPKEY *)&unk_1C00CC9C8,
                         (bool *)a1 + 73)
      || (unsigned int)NetSetupPropertyBag::ReadBoolean(
                         (NetSetupPropertyBag *)&v8,
                         (const struct _NETSETUPPROPKEY *)&unk_1C00CCA28,
                         (bool *)a1 + 74)
      || (unsigned int)ndisIfReadHiddenFlag((NetSetupPropertyBag *)&v8, a2, (bool *)a1 + 75) )
    {
      goto LABEL_17;
    }
    v4 = RtlStringCchPrintfW(
           v11,
           0x30uLL,
           (wchar_t *)L"\\Device\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           *(unsigned int *)a1,
           *((unsigned __int16 *)a1 + 2),
           *((unsigned __int16 *)a1 + 3),
           *((unsigned __int8 *)a1 + 8),
           *((unsigned __int8 *)a1 + 9),
           *((unsigned __int8 *)a1 + 10),
           *((unsigned __int8 *)a1 + 11),
           *((unsigned __int8 *)a1 + 12),
           *((unsigned __int8 *)a1 + 13),
           *((unsigned __int8 *)a1 + 14),
           *((unsigned __int8 *)a1 + 15));
    if ( v4 >= 0 )
    {
      v5 = Rtl::KString::Initialize(v11);
      v6 = (void *)*((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 7) = v5;
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0x7274534Bu);
        v5 = (struct Rtl::KString *)*((_QWORD *)a1 + 7);
      }
      if ( !v5 )
      {
        v4 = -1073741670;
        goto LABEL_19;
      }
      if ( !(unsigned int)NetSetupPropertyBag::ReadBoolean(
                            (NetSetupPropertyBag *)&v8,
                            (const struct _NETSETUPPROPKEY *)&unk_1C00CC998,
                            (bool *)a1 + 89)
        && (!*((_BYTE *)a1 + 89)
         || !(unsigned int)ndisLWMGetConfigurationStore((NetSetupPropertyBag *)&v8, (_DWORD *)a1 + 23)) )
      {
        v4 = 0;
        goto LABEL_19;
      }
LABEL_17:
      v4 = -1073741491;
    }
  }
LABEL_19:
  KRegKey::~KRegKey(&v10);
  return (unsigned int)v4;
}
