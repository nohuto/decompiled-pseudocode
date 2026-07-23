/*
 * XREFs of MiLogHotPatchOperation @ 0x1408CB8B8
 * Callers:
 *     MiHotPatchImage @ 0x1408CA494 (MiHotPatchImage.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     _tlgCreate1Sz_char @ 0x140270A0C (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x14029EF60 (MiFillLogProcessInfo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall MiLogHotPatchOperation(__int64 a1, int a2, int a3, int a4, int *a5, unsigned __int16 *a6, int a7)
{
  _UNKNOWN **v7; // rax
  __int64 v12; // rbx
  struct _KPROCESS *v13; // r10
  int v14; // eax
  __int64 v15; // r8
  int v17; // [rsp+28h] [rbp-E0h]
  int v18; // [rsp+30h] [rbp-D8h]
  unsigned int ProcessId; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  int v25; // [rsp+60h] [rbp-A8h] BYREF
  int v26; // [rsp+64h] [rbp-A4h] BYREF
  int v27; // [rsp+68h] [rbp-A0h] BYREF
  int v28; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v29; // [rsp+70h] [rbp-98h] BYREF
  int v30; // [rsp+74h] [rbp-94h] BYREF
  const CHAR *v31; // [rsp+78h] [rbp-90h] BYREF
  int v32; // [rsp+80h] [rbp-88h] BYREF
  __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *p_ProcessId; // [rsp+B8h] [rbp-50h]
  __int64 v37; // [rsp+C0h] [rbp-48h]
  _BYTE v38[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  __int64 *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  int *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  int *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]
  int *v47; // [rsp+118h] [rbp+10h]
  __int64 v48; // [rsp+120h] [rbp+18h]
  int *v49; // [rsp+128h] [rbp+20h]
  __int64 v50; // [rsp+130h] [rbp+28h]
  int *v51; // [rsp+138h] [rbp+30h]
  __int64 v52; // [rsp+140h] [rbp+38h]
  _DWORD *v53; // [rsp+148h] [rbp+40h]
  __int64 v54; // [rsp+150h] [rbp+48h]
  __int64 v55; // [rsp+158h] [rbp+50h]
  _DWORD v56[2]; // [rsp+160h] [rbp+58h] BYREF
  int *v57; // [rsp+168h] [rbp+60h]
  __int64 v58; // [rsp+170h] [rbp+68h]
  int *v59; // [rsp+178h] [rbp+70h]
  __int64 v60; // [rsp+180h] [rbp+78h]
  int *v61; // [rsp+188h] [rbp+80h]
  __int64 v62; // [rsp+190h] [rbp+88h]
  _DWORD *v63; // [rsp+198h] [rbp+90h]
  __int64 v64; // [rsp+1A0h] [rbp+98h]
  __int64 v65; // [rsp+1A8h] [rbp+A0h]
  _DWORD v66[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  int *v67; // [rsp+1B8h] [rbp+B0h]
  __int64 v68; // [rsp+1C0h] [rbp+B8h]
  int *v69; // [rsp+1C8h] [rbp+C0h]
  __int64 v70; // [rsp+1D0h] [rbp+C8h]
  __int64 *v71; // [rsp+1D8h] [rbp+D0h]
  __int64 v72; // [rsp+1E0h] [rbp+D8h]
  _UNKNOWN *retaddr; // [rsp+210h] [rbp+108h] BYREF

  v7 = &retaddr;
  v31 = 0LL;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    LOBYTE(v7) = MiFillLogProcessInfo(
                   (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6],
                   &v32,
                   &v31);
    v12 = *(_QWORD *)&qword_140C4EF20;
    if ( **(_DWORD **)&qword_140C4EF20 > 5u )
    {
      LOBYTE(v7) = tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000020LL);
      if ( (_BYTE)v7 )
      {
        ProcessId = (unsigned int)PsGetProcessId(v13);
        p_ProcessId = &ProcessId;
        v37 = 4LL;
        tlgCreate1Sz_char((__int64)v38, v31);
        v39 = &v20;
        v33 = *(_QWORD *)(a1 + 24);
        v41 = &v33;
        v43 = &v21;
        v45 = &v22;
        v23 = *(_DWORD *)(a1 + 88);
        v47 = &v23;
        v24 = *(_DWORD *)(a1 + 80);
        v49 = &v24;
        v25 = *(_DWORD *)(a1 + 84);
        v51 = &v25;
        v53 = v56;
        v55 = *(_QWORD *)(a1 + 72);
        v56[0] = *(unsigned __int16 *)(a1 + 64);
        v57 = &v26;
        v20 = a7;
        v40 = 4LL;
        v42 = 8LL;
        v21 = a2;
        v27 = *a5;
        v59 = &v27;
        v28 = a5[1];
        v61 = &v28;
        v63 = v66;
        v65 = *((_QWORD *)a6 + 1);
        v66[0] = *a6;
        v29 = *(_DWORD *)(a1 + 32);
        v67 = &v29;
        v14 = *(_DWORD *)(a1 + 92) >> 1;
        v44 = 4LL;
        v22 = a3;
        v46 = 4LL;
        v48 = 4LL;
        v50 = 4LL;
        v52 = 4LL;
        v54 = 2LL;
        v56[1] = 0;
        v26 = a4;
        v58 = 4LL;
        v60 = 4LL;
        v62 = 4LL;
        v64 = 2LL;
        v66[1] = 0;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 8LL;
        v30 = v14 & 1;
        v69 = &v30;
        v34 = 2164260864LL;
        v71 = &v34;
        LOBYTE(v7) = tlgWriteEx_EtwWriteEx(v12, (unsigned __int8 *)&dword_14002614C, v15, 1u, v17, v18, 0x15u, &v35);
      }
    }
  }
  return (char)v7;
}
