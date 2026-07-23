/*
 * XREFs of MiLogHotPatchPagesLocked @ 0x1408CBF48
 * Callers:
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchPagesLocked(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  __int64 v6; // rbx
  unsigned int ProcessId; // eax
  __int64 v12; // r8
  int v14; // [rsp+20h] [rbp-F8h]
  int v15; // [rsp+28h] [rbp-F0h]
  unsigned int v16; // [rsp+40h] [rbp-D8h] BYREF
  int v17; // [rsp+44h] [rbp-D4h] BYREF
  int v18; // [rsp+48h] [rbp-D0h] BYREF
  int v19; // [rsp+4Ch] [rbp-CCh] BYREF
  __int64 v20; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp-A8h] BYREF
  unsigned int *v24; // [rsp+90h] [rbp-88h]
  int v25; // [rsp+98h] [rbp-80h]
  int v26; // [rsp+9Ch] [rbp-7Ch]
  __int64 *v27; // [rsp+A0h] [rbp-78h]
  int v28; // [rsp+A8h] [rbp-70h]
  int v29; // [rsp+ACh] [rbp-6Ch]
  __int64 *v30; // [rsp+B0h] [rbp-68h]
  int v31; // [rsp+B8h] [rbp-60h]
  int v32; // [rsp+BCh] [rbp-5Ch]
  int *v33; // [rsp+C0h] [rbp-58h]
  int v34; // [rsp+C8h] [rbp-50h]
  int v35; // [rsp+CCh] [rbp-4Ch]
  int *v36; // [rsp+D0h] [rbp-48h]
  int v37; // [rsp+D8h] [rbp-40h]
  int v38; // [rsp+DCh] [rbp-3Ch]
  int *v39; // [rsp+E0h] [rbp-38h]
  int v40; // [rsp+E8h] [rbp-30h]
  int v41; // [rsp+ECh] [rbp-2Ch]
  __int64 *v42; // [rsp+F0h] [rbp-28h]
  int v43; // [rsp+F8h] [rbp-20h]
  int v44; // [rsp+FCh] [rbp-1Ch]
  _UNKNOWN *retaddr; // [rsp+118h] [rbp+0h] BYREF

  v5 = &retaddr;
  v6 = *(_QWORD *)&qword_140C4EF20;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    if ( **(_DWORD **)&qword_140C4EF20 > 5u )
    {
      LOBYTE(v5) = tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000020LL);
      if ( (_BYTE)v5 )
      {
        ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v26 = 0;
        v29 = 0;
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v44 = 0;
        v16 = ProcessId;
        v24 = &v16;
        v27 = &v20;
        v30 = &v21;
        v33 = &v17;
        v36 = &v18;
        v19 = a5;
        v39 = &v19;
        v42 = &v22;
        v25 = 4;
        v28 = 8;
        v31 = 8;
        v34 = 4;
        v37 = 4;
        v40 = 4;
        v43 = 8;
        v20 = a1;
        v21 = a2;
        v17 = a3;
        v18 = a4;
        v22 = 0x1000000LL;
        LOBYTE(v5) = tlgWriteEx_EtwWriteEx(v6, (unsigned __int8 *)&byte_140026489, v12, 1u, v14, v15, 9u, &v23);
      }
    }
  }
  return (char)v5;
}
