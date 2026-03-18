/*
 * XREFs of ?LPMDisplayUnregisterInternalDisplay@@YAXPEAXI@Z @ 0x1C0274C8C
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C02CAB14 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C004652C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 */

void __fastcall LPMDisplayUnregisterInternalDisplay(PFILE_OBJECT a1, struct _ERESOURCE *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  PFILE_OBJECT *v6; // rbx
  _QWORD *v7; // rax
  PERESOURCE Resource; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
  v6 = FileObject;
  if ( FileObject[2] == a1 && *((_DWORD *)FileObject + 6) == (_DWORD)v3 )
  {
    FileObject[2] = 0LL;
    *((_DWORD *)v6 + 6) = -1;
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
