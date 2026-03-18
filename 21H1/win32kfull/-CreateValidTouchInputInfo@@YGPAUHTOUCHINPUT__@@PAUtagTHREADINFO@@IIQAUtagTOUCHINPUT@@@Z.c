/*
 * XREFs of ?CreateValidTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IIQAUtagTOUCHINPUT@@@Z @ 0x149228
 * Callers:
 *     _ForwardTouchMessage@36 @ 0x149C25 (_ForwardTouchMessage@36.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?AllocTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IPBUtagTOUCHINPUT@@IPAK@Z @ 0x148FC5 (-AllocTouchInputInfo@@YGPAUHTOUCHINPUT__@@PAUtagTHREADINFO@@IPBUtagTOUCHINPUT@@IPAK@Z.c)
 *     ?CopyTouchInputListSorted@@YGHPBUtagTOUCHINPUTLIST@@PAU1@HPAIPAH@Z @ 0x149084 (-CopyTouchInputListSorted@@YGHPBUtagTOUCHINPUTLIST@@PAU1@HPAIPAH@Z.c)
 */

struct HTOUCHINPUT__ *__userpurge CreateValidTouchInputInfo@<eax>(
        int a1@<ecx>,
        struct tagTHREADINFO *a2,
        unsigned int a3,
        unsigned int a4,
        struct tagTOUCHINPUT *const a5)
{
  struct HTOUCHINPUT__ *v6; // esi
  struct _NT_TIB *v7; // eax
  const struct tagTOUCHINPUTLIST *v9; // ecx
  int v10; // eax
  const struct tagTOUCHINPUT *v11; // ecx
  struct tagTHREADINFO *v12; // edi
  ULONG *v13; // [esp+0h] [ebp-3Ch]
  unsigned int *v14; // [esp+0h] [ebp-3Ch]
  unsigned int v15; // [esp+0h] [ebp-3Ch]
  int *v16; // [esp+4h] [ebp-38h]
  unsigned int *v17; // [esp+4h] [ebp-38h]
  _DWORD v18[5]; // [esp+Ch] [ebp-30h] BYREF
  struct tagTHREADINFO *v19; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int *v20; // [esp+24h] [ebp-18h]
  struct tagTHREADINFO *v21; // [esp+28h] [ebp-14h]
  int v22; // [esp+2Ch] [ebp-10h]
  int v23; // [esp+30h] [ebp-Ch]
  unsigned int v24; // [esp+34h] [ebp-8h] BYREF
  int v25; // [esp+38h] [ebp-4h]

  v6 = 0;
  v18[3] = 0;
  v18[4] = 0;
  v25 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( ULongLongToULong(40LL * (unsigned int)a2, v13) < 0 )
  {
    v7 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741675);
LABEL_3:
    UserSetLastError(v7);
    return 0;
  }
  v20 = 0;
  v19 = a2;
  v21 = (struct tagTHREADINFO *)Win32AllocPool(v25, 1952871253);
  if ( !v21 )
  {
    v7 = (struct _NT_TIB *)RtlNtStatusToDosError(-1073741801);
    goto LABEL_3;
  }
  v18[2] = a3;
  v18[0] = a2;
  v18[1] = a2;
  v10 = CopyTouchInputListSorted((int)&v19, (int)v18, v9, (struct tagTOUCHINPUTLIST *)&v24, (int)v9, v14, v16);
  v12 = v21;
  if ( v10 )
    v6 = AllocTouchInputInfo(v20, a1, v21, v24, v11, v15, v17);
  if ( v12 )
    Win32FreePool(v12);
  return v6;
}
