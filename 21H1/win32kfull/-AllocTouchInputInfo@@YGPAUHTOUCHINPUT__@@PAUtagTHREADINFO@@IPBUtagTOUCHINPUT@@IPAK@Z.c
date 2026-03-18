/*
 * XREFs of ?AllocTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IPBUtagTOUCHINPUT@@IPAK@Z @ 0x148FC5
 * Callers:
 *     ?CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z @ 0x149228 (-CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _CalcTouchInputInfoSize@4 @ 0x149B5B (_CalcTouchInputInfoSize@4.c)
 */

struct HTOUCHINPUT__ *__userpurge AllocTouchInputInfo@<eax>(
        unsigned int *a1@<edx>,
        int a2@<ecx>,
        struct tagTHREADINFO *Src,
        unsigned int a4,
        const struct tagTOUCHINPUT *a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v9; // esi
  _DWORD *v10; // esi
  struct _NT_TIB *v12; // eax
  ULONG *v13; // [esp+0h] [ebp-10h]

  v9 = CalcTouchInputInfoSize(a1);
  if ( v9 && ULongLongToULong(40LL * (unsigned int)a1, v13) >= 0 )
  {
    v10 = (_DWORD *)HMAllocObject(a2, 0, 20, v9);
    if ( v10 )
    {
      v10[3] = a1;
      v10[4] = a4;
      return (struct HTOUCHINPUT__ *)*v10;
    }
  }
  else
  {
    v12 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741675);
    UserSetLastError(v12);
  }
  return 0;
}
