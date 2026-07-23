/*
 * XREFs of MiLogHotPatchManagement @ 0x1408CB420
 * Callers:
 *     NtManageHotPatch @ 0x1408CEEA0 (NtManageHotPatch.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     PsGetProcessId @ 0x140269640 (PsGetProcessId.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

void __fastcall MiLogHotPatchManagement(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // r8
  int v14; // [rsp+20h] [rbp-268h]
  int v15; // [rsp+28h] [rbp-260h]
  unsigned int v16; // [rsp+40h] [rbp-248h] BYREF
  int v17; // [rsp+44h] [rbp-244h] BYREF
  int v18; // [rsp+48h] [rbp-240h] BYREF
  int v19; // [rsp+4Ch] [rbp-23Ch] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-238h] BYREF
  int v21; // [rsp+54h] [rbp-234h] BYREF
  int v22; // [rsp+58h] [rbp-230h] BYREF
  int v23; // [rsp+5Ch] [rbp-22Ch] BYREF
  unsigned int v24; // [rsp+60h] [rbp-228h] BYREF
  int v25; // [rsp+64h] [rbp-224h] BYREF
  int v26; // [rsp+68h] [rbp-220h] BYREF
  int v27; // [rsp+6Ch] [rbp-21Ch] BYREF
  unsigned int v28; // [rsp+70h] [rbp-218h] BYREF
  int v29; // [rsp+74h] [rbp-214h] BYREF
  int v30; // [rsp+78h] [rbp-210h] BYREF
  int v31; // [rsp+7Ch] [rbp-20Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+80h] [rbp-208h] BYREF
  unsigned int *p_ProcessId; // [rsp+A0h] [rbp-1E8h]
  __int64 v34; // [rsp+A8h] [rbp-1E0h]
  int *v35; // [rsp+B0h] [rbp-1D8h]
  __int64 v36; // [rsp+B8h] [rbp-1D0h]
  int *v37; // [rsp+C0h] [rbp-1C8h]
  __int64 v38; // [rsp+C8h] [rbp-1C0h]
  int *v39; // [rsp+D0h] [rbp-1B8h]
  __int64 v40; // [rsp+D8h] [rbp-1B0h]
  _DWORD *v41; // [rsp+E0h] [rbp-1A8h]
  __int64 v42; // [rsp+E8h] [rbp-1A0h]
  __int64 v43; // [rsp+F0h] [rbp-198h]
  _DWORD v44[2]; // [rsp+F8h] [rbp-190h] BYREF
  __int64 v45; // [rsp+100h] [rbp-188h]
  int v46; // [rsp+108h] [rbp-180h]
  int v47; // [rsp+10Ch] [rbp-17Ch]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+110h] [rbp-178h] BYREF
  unsigned int *v49; // [rsp+130h] [rbp-158h]
  __int64 v50; // [rsp+138h] [rbp-150h]
  int *v51; // [rsp+140h] [rbp-148h]
  __int64 v52; // [rsp+148h] [rbp-140h]
  int *v53; // [rsp+150h] [rbp-138h]
  __int64 v54; // [rsp+158h] [rbp-130h]
  int *v55; // [rsp+160h] [rbp-128h]
  __int64 v56; // [rsp+168h] [rbp-120h]
  _DWORD *v57; // [rsp+170h] [rbp-118h]
  __int64 v58; // [rsp+178h] [rbp-110h]
  __int64 v59; // [rsp+180h] [rbp-108h]
  _DWORD v60[2]; // [rsp+188h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+190h] [rbp-F8h] BYREF
  unsigned int *v62; // [rsp+1B0h] [rbp-D8h]
  __int64 v63; // [rsp+1B8h] [rbp-D0h]
  int *v64; // [rsp+1C0h] [rbp-C8h]
  __int64 v65; // [rsp+1C8h] [rbp-C0h]
  int *v66; // [rsp+1D0h] [rbp-B8h]
  __int64 v67; // [rsp+1D8h] [rbp-B0h]
  int *v68; // [rsp+1E0h] [rbp-A8h]
  __int64 v69; // [rsp+1E8h] [rbp-A0h]
  __int64 v70; // [rsp+1F0h] [rbp-98h]
  int v71; // [rsp+1F8h] [rbp-90h]
  int v72; // [rsp+1FCh] [rbp-8Ch]
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+200h] [rbp-88h] BYREF
  unsigned int *v74; // [rsp+220h] [rbp-68h]
  __int64 v75; // [rsp+228h] [rbp-60h]
  int *v76; // [rsp+230h] [rbp-58h]
  __int64 v77; // [rsp+238h] [rbp-50h]
  int *v78; // [rsp+240h] [rbp-48h]
  __int64 v79; // [rsp+248h] [rbp-40h]
  int *v80; // [rsp+250h] [rbp-38h]
  __int64 v81; // [rsp+258h] [rbp-30h]

  v4 = *(_QWORD *)&qword_140C4EF20;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    if ( a1 )
    {
      if ( a1 == 3 )
      {
        if ( **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
        {
          ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
          v34 = 4LL;
          p_ProcessId = &ProcessId;
          v35 = &v21;
          v22 = *(_DWORD *)(a2 + 92);
          v37 = &v22;
          v23 = *(_DWORD *)(a2 + 96);
          v39 = &v23;
          v41 = v44;
          v43 = *((_QWORD *)a3 + 1);
          v44[0] = *a3;
          v45 = a2 + 24;
          v9 = *(unsigned __int8 *)(a2 + 25);
          v21 = a4;
          v36 = 4LL;
          v38 = 4LL;
          v40 = 4LL;
          v46 = 4 * v9 + 8;
          v42 = 2LL;
          v44[1] = 0;
          v47 = 0;
          tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&dword_140026284, v10, 1u, v14, v15, 9u, &v32);
        }
      }
      else if ( a1 == 1 )
      {
        if ( **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
        {
          v24 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
          v75 = 4LL;
          v74 = &v24;
          v76 = &v25;
          v26 = *(_DWORD *)(a2 + 4);
          v78 = &v26;
          v27 = *(_DWORD *)(a2 + 8);
          v80 = &v27;
          v25 = a4;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&word_140026596, v11, 1u, v14, v15, 6u, &v73);
        }
      }
      else if ( a1 == 4 && **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
      {
        v28 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v63 = 4LL;
        v62 = &v28;
        v64 = &v29;
        v30 = *(_DWORD *)(a2 + 4);
        v66 = &v30;
        v31 = *(_DWORD *)(a2 + 8);
        v68 = &v31;
        v70 = a2 + 12;
        v12 = *(unsigned __int8 *)(a2 + 13);
        v29 = a4;
        v65 = 4LL;
        v67 = 4LL;
        v69 = 4LL;
        v71 = 4 * v12 + 8;
        v72 = 0;
        tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)&dword_140026534, v13, 1u, v14, v15, 7u, &v61);
      }
    }
    else if ( **(_DWORD **)&qword_140C4EF20 > 5u )
    {
      if ( tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 32LL) )
      {
        v16 = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v50 = 4LL;
        v49 = &v16;
        v51 = &v17;
        v18 = *(_DWORD *)(a2 + 92);
        v53 = &v18;
        v19 = *(_DWORD *)(a2 + 96);
        v55 = &v19;
        v57 = v60;
        v59 = *((_QWORD *)a3 + 1);
        v60[0] = *a3;
        v17 = a4;
        v52 = 4LL;
        v54 = 4LL;
        v56 = 4LL;
        v58 = 2LL;
        v60[1] = 0;
        tlgWriteEx_EtwWriteEx(v4, (unsigned __int8 *)byte_1400262EF, v8, 1u, v14, v15, 8u, &v48);
      }
    }
  }
}
