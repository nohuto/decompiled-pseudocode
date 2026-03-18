/*
 * XREFs of ??1CVP_SYSTEM_THREAD@@MEAA@XZ @ 0x1C025F8EC
 * Callers:
 *     ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C025F960 (--_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z.c)
 *     ??_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z @ 0x1C025F9C0 (--_GCTDR_SUBMIT_REPORT_THREAD@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD(CVP_SYSTEM_THREAD *this)
{
  void *v1; // rcx

  *(_QWORD *)this = &CVP_SYSTEM_THREAD::`vftable';
  v1 = (void *)*((_QWORD *)this + 1);
  if ( v1 )
    ZwClose(v1);
}
