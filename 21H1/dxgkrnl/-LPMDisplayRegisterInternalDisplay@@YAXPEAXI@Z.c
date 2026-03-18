/*
 * XREFs of ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C0271770
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C00455CC (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 */

void __fastcall LPMDisplayRegisterInternalDisplay(struct _FILE_OBJECT *a1, struct _ERESOURCE *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  PFILE_OBJECT *v6; // rbx
  _QWORD *v7; // rax
  PERESOURCE Resource; // [rsp+40h] [rbp+18h] BYREF

  v3 = (unsigned int)a2;
  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v6 = FileObject;
  if ( *((_DWORD *)FileObject + 6) == -1 )
  {
    FileObject[2] = a1;
    *((_DWORD *)v6 + 6) = v3;
  }
  else
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v7[3] = v6[2];
    v7[4] = *((unsigned int *)v6 + 6);
    v7[5] = a1;
    v7[6] = v3;
    WdLogEvent5_WdError(v7);
  }
  ExReleaseResourceLite(Resource);
  KeLeaveCriticalRegion();
}
