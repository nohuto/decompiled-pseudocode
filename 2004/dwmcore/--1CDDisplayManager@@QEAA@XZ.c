/*
 * XREFs of ??1CDDisplayManager@@QEAA@XZ @ 0x1800E2080
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DDisplayManager__ @ 0x1800F3F20 (_dynamic_atexit_destructor_for__g_DDisplayManager__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDDisplayManager::~CDDisplayManager(CDDisplayManager *this)
{
  if ( qword_1803495D8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1803495D8 + 16LL))(qword_1803495D8);
  if ( *((_QWORD *)&g_DDisplayManager + 1) )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&g_DDisplayManager + 1) + 16LL))(*((_QWORD *)&g_DDisplayManager + 1));
  if ( (_QWORD)g_DDisplayManager )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)g_DDisplayManager + 16LL))(g_DDisplayManager);
}
