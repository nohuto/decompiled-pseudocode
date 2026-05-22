/*
 * XREFs of ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800A5FCC
 * Callers:
 *     ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800A61A0 (--_EHidLampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037590 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18009F144 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800A859C (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 */

void __fastcall HidLampArrayDevice::~HidLampArrayDevice(
        RefCountedObject **this,
        const struct std::nothrow_t *a2,
        __int64 a3,
        __int64 a4)
{
  RefCountedObject *v5; // rcx
  RefCountedObject *v6; // rcx
  RefCountedObject *v7; // rcx
  RefCountedObject *v8; // rcx
  RefCountedObject *v9; // rcx
  RefCountedObject *v10; // rcx
  RefCountedObject *v11; // rcx
  RefCountedObject *v12; // rcx
  RefCountedObject *v13; // rcx
  const wchar_t *v14; // [rsp+40h] [rbp+8h] BYREF
  const char *v15; // [rsp+48h] [rbp+10h] BYREF

  *this = (RefCountedObject *)&HidLampArrayDevice::`vftable';
  if ( (unsigned int)dword_1802053F0 > 5 )
  {
    v14 = (const wchar_t *)(this + 3);
    v15 = "Removing HidLampArrayDevice (device likely removed by user)";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      (__int64)this,
      byte_1801CA2AF,
      a3,
      a4,
      (const unsigned __int16 **)&v15,
      &v14);
  }
  if ( *((_BYTE *)this + 637) )
    HidLampArrayDevice::SetAutonomousMode((HidLampArrayDevice *)this, 1);
  v5 = this[78];
  if ( v5 )
    operator delete(v5, a2);
  v6 = this[77];
  if ( v6 )
  {
    this[77] = 0LL;
    (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = this[76];
  if ( v7 )
  {
    this[76] = 0LL;
    (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = this[75];
  if ( v8 )
  {
    this[75] = 0LL;
    (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = this[74];
  if ( v9 )
  {
    this[74] = 0LL;
    (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = this[73];
  if ( v10 )
  {
    this[73] = 0LL;
    (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = this[72];
  if ( v11 )
  {
    this[72] = 0LL;
    (*(void (__fastcall **)(RefCountedObject *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = this[71];
  if ( v12 )
    operator delete(v12, a2);
  v13 = this[2];
  if ( v13 )
  {
    this[2] = 0LL;
    RefCountedObject::Release(v13);
  }
  *this = (RefCountedObject *)&RefCountedObject::`vftable';
}
