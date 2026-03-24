/*
 * XREFs of ??1CDDisplayManager@@QEAA@XZ @ 0x1800E6774
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DDisplayManager__ @ 0x1800F9990 (_dynamic_atexit_destructor_for__g_DDisplayManager__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayManager::~CDDisplayManager(CDDisplayManager *this)
{
  if ( qword_18034B678 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18034B678 + 16LL))(qword_18034B678);
  if ( *((_QWORD *)&g_DDisplayManager + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&g_DDisplayManager + 1) + 16LL))(*((_QWORD *)&g_DDisplayManager + 1));
  if ( (_QWORD)g_DDisplayManager )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)g_DDisplayManager + 16LL))(g_DDisplayManager);
}
