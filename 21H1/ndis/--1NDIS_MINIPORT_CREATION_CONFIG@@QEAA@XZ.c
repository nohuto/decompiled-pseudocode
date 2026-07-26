/*
 * XREFs of ??1NDIS_MINIPORT_CREATION_CONFIG@@QEAA@XZ @ 0x1C0031B74
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x1C0031330 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 *     ?ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0115508 (-ndisLWMCreateMiniport@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_GUID@@PEAPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ??$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@Z @ 0x1C003D5B8 (--$invoke@P6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@@wistd@@YAX$$QEAP6AXPEAUNDISWATCHDOG__@@@ZAEAPEAU1@.c)
 */

void __fastcall NDIS_MINIPORT_CREATION_CONFIG::~NDIS_MINIPORT_CREATION_CONFIG(NDIS_MINIPORT_CREATION_CONFIG *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  NTSTATUS (__stdcall *v6)(HANDLE); // [rsp+38h] [rbp+10h] BYREF

  v2 = (void *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v2 )
    ExFreePoolWithTag(v2, 0x7274534Bu);
  v3 = (void *)*((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0x7274534Bu);
  v4 = (void *)*((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x7274534Bu);
  if ( *((_QWORD *)this + 3) )
  {
    v5 = *((_QWORD *)this + 3);
    v6 = ZwClose;
    wistd::invoke<void (*)(NDISWATCHDOG__ *),NDISWATCHDOG__ * &>(&v6, &v5);
  }
}
