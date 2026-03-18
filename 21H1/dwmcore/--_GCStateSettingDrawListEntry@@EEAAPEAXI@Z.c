/*
 * XREFs of ??_GCStateSettingDrawListEntry@@EEAAPEAXI@Z @ 0x18001F700
 * Callers:
 *     ??_ECStateSettingDrawListEntry@@GBA@EAAPEAXI@Z @ 0x1800EDAD0 (--_ECStateSettingDrawListEntry@@GBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

CStateSettingDrawListEntry *__fastcall CStateSettingDrawListEntry::`scalar deleting destructor'(
        CStateSettingDrawListEntry *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
