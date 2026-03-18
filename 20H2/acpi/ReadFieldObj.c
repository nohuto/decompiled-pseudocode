/*
 * XREFs of ReadFieldObj @ 0x1C0001400
 * Callers:
 *     <none>
 * Callees:
 *     PushAccFieldObj @ 0x1C00249B0 (PushAccFieldObj.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     AccessFieldData @ 0x1C0031B7C (AccessFieldData.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edx
  __int64 v5; // r15
  int v6; // edx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r10
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rdi
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rsi
  char v17; // r8
  unsigned __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rsi
  unsigned int v26; // ecx
  __int64 v27; // rdi
  __int64 v28; // r14
  unsigned __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // r12
  unsigned __int64 v33; // rdx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  _QWORD *v42; // rdi
  _QWORD *v43; // rbx
  __int64 v44; // r8
  _QWORD *v45; // rax
  _QWORD *i; // rdx
  _QWORD *v47; // rcx
  _QWORD *v48; // r9
  __int64 v49; // rcx
  _QWORD *v50; // rax
  _QWORD *v51; // r9
  _QWORD *v52; // rbx
  __int64 v53; // rdx
  _QWORD *v54; // rax
  int v56; // eax
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // r10
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  int (__fastcall *v63)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v64; // rax
  int *v65; // rcx
  int (__fastcall *v66)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  __int64 v67; // rax
  int *v68; // rcx
  __int64 v69; // rcx
  _QWORD *v70; // rax
  signed __int32 v71[8]; // [rsp+0h] [rbp-100h] BYREF
  char v72; // [rsp+30h] [rbp-D0h]
  __int64 Src; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v75; // [rsp+48h] [rbp-B8h]
  __int64 v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+58h] [rbp-A8h] BYREF
  int v78; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v79[10]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v80[10]; // [rsp+B0h] [rbp-50h] BYREF

  v75 = a3;
  v4 = a3;
  v76 = a1;
  v5 = a1;
  if ( a3 )
  {
    v7 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    v7 = v6 & 0xF;
    if ( (v6 & 0xF) == 0 )
    {
      v8 = *(_DWORD *)(a2 + 80);
      v9 = a2 + 96;
      v10 = *(_DWORD *)(a2 + 60);
      while ( 1 )
      {
        if ( v8 >= v10 )
        {
          v41 = v6 + 3;
LABEL_44:
          *(_DWORD *)(a2 + 16) = v41;
LABEL_45:
          v42 = *(_QWORD **)(v5 + 416);
          v43 = v42 - 2;
          *(_QWORD *)(v5 + 416) = v42[1];
          *((_DWORD *)v42 - 4) = 0;
          NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
          v44 = *(v42 - 1);
          v45 = *(_QWORD **)(v44 + 40);
          for ( i = (_QWORD *)(v44 + 40); v45 != i; v45 = (_QWORD *)*v45 )
          {
            if ( v42 < v45 )
              break;
          }
          v47 = (_QWORD *)v45[1];
          if ( (_QWORD *)*v47 == v45 )
          {
            v42[1] = v47;
            *v42 = v45;
            *v47 = v42;
            v45[1] = v42;
            v48 = (_QWORD *)*v42;
            v49 = *v42 - 16LL;
            if ( (_QWORD *)*v42 == i
              || (v59 = *((unsigned int *)v43 + 1), (_QWORD *)v49 != (_QWORD *)((char *)v43 + v59)) )
            {
LABEL_48:
              v50 = (_QWORD *)v43[3];
              v51 = v50 - 2;
              if ( v50 != i )
              {
                v62 = *((unsigned int *)v51 + 1);
                if ( v43 == (_QWORD *)((char *)v51 + v62) )
                {
                  *((_DWORD *)v51 + 1) = *((_DWORD *)v43 + 1) + v62;
                  v69 = *v42;
                  if ( *(_QWORD **)(*v42 + 8LL) != v42 )
                    goto LABEL_128;
                  v70 = (_QWORD *)v42[1];
                  if ( (_QWORD *)*v70 != v42 )
                    goto LABEL_128;
                  *v70 = v69;
                  v43 = v51;
                  *(_QWORD *)(v69 + 8) = v70;
                }
              }
              if ( *(_QWORD *)(v44 + 32) <= (unsigned __int64)v43 + *((unsigned int *)v43 + 1) )
              {
                *(_QWORD *)(v44 + 32) = v43;
                v52 = v43 + 2;
                v53 = *v52;
                if ( *(_QWORD **)(*v52 + 8LL) != v52 )
                  goto LABEL_128;
                v54 = (_QWORD *)v52[1];
                if ( (_QWORD *)*v54 != v52 )
                  goto LABEL_128;
                *v54 = v53;
                *(_QWORD *)(v53 + 8) = v54;
              }
              KeReleaseSpinLock(&gmutHeap, NewIrql);
              return v75;
            }
            *((_DWORD *)v43 + 1) = v59 + *(_DWORD *)(v49 + 4);
            v60 = *v48;
            if ( *(_QWORD **)(*v48 + 8LL) == v48 )
            {
              v61 = (_QWORD *)v48[1];
              if ( (_QWORD *)*v61 == v48 )
              {
                *v61 = v60;
                *(_QWORD *)(v60 + 8) = v61;
                goto LABEL_48;
              }
            }
          }
LABEL_128:
          __fastfail(3u);
        }
        *(_DWORD *)(a2 + 16) = v6 + 1;
        v39 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v39 + 2) == 5 )
        {
          v40 = **(_QWORD **)(v39 + 32);
          if ( *(_WORD *)(v40 + 66) == 132 )
            return (unsigned int)PushAccFieldObj(
                                   v5,
                                   WriteFieldObj,
                                   **(_QWORD **)(v40 + 96) + 64LL,
                                   *(_QWORD *)(**(_QWORD **)(v40 + 96) + 96LL) + 8LL,
                                   v9,
                                   4);
        }
LABEL_4:
        v11 = *(_QWORD *)(a2 + 32);
        ++*(_DWORD *)(a2 + 16);
        v75 = AccessFieldData(v5, v11, (int)a2 + 96, (int)a2 + 88, 1);
        v4 = v75;
        if ( v75 || a2 != *(_QWORD *)(v5 + 416) )
          return v4;
LABEL_6:
        if ( *(_DWORD *)(a2 + 80) )
          break;
LABEL_23:
        v23 = *(_DWORD *)(a2 + 76);
        v24 = *(_DWORD *)(a2 + 72);
        v25 = *(_QWORD *)(a2 + 88) >> v23;
        v26 = *(_DWORD *)(a2 + 104);
        *(_QWORD *)(a2 + 88) = v25;
        if ( v26 < v24 )
        {
          if ( v26 >= 0x40 )
            v58 = 0LL;
          else
            v58 = 1LL << v26;
          v25 &= v58 - 1;
          *(_QWORD *)(a2 + 88) = v25;
        }
        if ( v24 >= 0x40 )
          v27 = 0LL;
        else
          v27 = 1LL << v24;
        v28 = *(unsigned int *)(a2 + 56);
        v29 = *(_QWORD *)(a2 + 40);
        v30 = (v27 - 1) >> v23;
        v31 = 0LL;
        v74 = 0LL;
        v78 = 0;
        v80[0] = 0LL;
        v80[1] = 255LL;
        v80[2] = 0xFFFFLL;
        v80[3] = 0LL;
        v80[4] = 0xFFFFFFFFLL;
        memset(&v80[5], 0, 24);
        v80[8] = -1LL;
        if ( (unsigned int)v28 <= 8 )
        {
          v32 = v80[v28];
          if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
            goto LABEL_28;
          v66 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144);
          if ( !v66 )
            goto LABEL_28;
          if ( v30 == v32 )
            goto LABEL_114;
          if ( v66(0LL, v29, &v74, (unsigned int)v28, &v78) < 0 )
            goto LABEL_115;
          v31 = v74;
LABEL_114:
          v67 = v25 | v31 & ~v30;
          v68 = &v78;
          v74 = v67;
          LOBYTE(v68) = 1;
          if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
                 v68,
                 v29,
                 &v74,
                 (unsigned int)v28,
                 &v78) < 0 )
          {
LABEL_115:
            v31 = v74;
LABEL_28:
            if ( (unsigned int)v28 == 1LL )
              v33 = 0LL;
            else
              v33 = v29 % (unsigned int)v28;
            if ( v33 )
            {
              if ( v30 != v32 )
              {
                memmove(&v74, (const void *)v29, (unsigned int)v28);
                v31 = v74;
              }
              v74 = v25 | v31 & ~v30;
              memmove((void *)v29, &v74, (unsigned int)v28);
            }
            else
            {
              switch ( (_DWORD)v28 )
              {
                case 1:
                  if ( v30 != v32 )
                    v31 = *(unsigned __int8 *)v29;
                  v74 = v25 | v31 & ~v30;
                  *(_BYTE *)v29 = v74;
                  goto LABEL_35;
                case 4:
                  if ( v30 != v32 )
                    v31 = *(unsigned int *)v29;
                  v74 = v25 | v31 & ~v30;
                  *(_DWORD *)v29 = v74;
                  goto LABEL_35;
                case 2:
                  if ( v30 != v32 )
                    v31 = *(unsigned __int16 *)v29;
                  v74 = v25 | v31 & ~v30;
                  *(_WORD *)v29 = v74;
LABEL_35:
                  _InterlockedOr(v71, 0);
                  break;
                case 8:
                  if ( v30 != v32 )
                    v31 = *(_QWORD *)v29;
                  v74 = v25 | v31 & ~v30;
                  *(_QWORD *)v29 = v74;
                  KeFlushWriteBuffer();
                  break;
              }
            }
          }
          v5 = v76;
        }
        v34 = *(_DWORD *)(a2 + 56);
        v9 = a2 + 96;
        *(_DWORD *)(a2 + 96) += v34;
        v35 = *(_DWORD *)(a2 + 100);
        v36 = *(_DWORD *)(a2 + 16);
        *(_DWORD *)(a2 + 100) = 0;
        v37 = v35 - 8 * v34;
        v38 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v37;
        v10 = *(_DWORD *)(a2 + 60);
        v8 = v38 + 1;
        *(_DWORD *)(a2 + 80) = v8;
        if ( v8 >= v10 )
        {
          v41 = v36 + 1;
          goto LABEL_44;
        }
        v6 = v36 - 2;
        *(_DWORD *)(a2 + 16) = v6;
      }
      v12 = *(_DWORD *)(a2 + 76);
      if ( v12 >= 0x40 )
        v13 = 0LL;
      else
        v13 = 1LL << v12;
      v14 = *(_DWORD *)(a2 + 72);
      if ( v14 >= 0x40 )
        v15 = 0LL;
      else
        v15 = *(_QWORD *)(a2 + 88) << v14;
      v16 = *(unsigned int *)(a2 + 56);
      v17 = 0;
      v18 = *(_QWORD *)(a2 + 40);
      v19 = v15 & *(_QWORD *)(a2 + 64);
      v20 = (v13 - 1) << v14;
      v21 = 0LL;
      Src = 0LL;
      v77 = 0;
      v79[0] = 0LL;
      v79[1] = 255LL;
      v79[2] = 0xFFFFLL;
      v79[3] = 0LL;
      v79[4] = 0xFFFFFFFFLL;
      memset(&v79[5], 0, 24);
      v79[8] = -1LL;
      v72 = 0;
      if ( (unsigned int)v16 > 8 )
      {
LABEL_22:
        *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
        if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
        {
          ++*(_DWORD *)(a2 + 16);
          goto LABEL_45;
        }
        goto LABEL_23;
      }
      if ( v20 == v79[v16] )
      {
        v17 = 1;
        v72 = 1;
      }
      if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
        || (v63 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL )
      {
LABEL_15:
        if ( (unsigned int)v16 == 1LL )
          v22 = 0LL;
        else
          v22 = v18 % (unsigned int)v16;
        if ( v22 )
        {
          if ( !v17 )
          {
            memmove(&Src, (const void *)v18, (unsigned int)v16);
            v21 = Src;
          }
          Src = v19 | v21 & ~v20;
          memmove((void *)v18, &Src, (unsigned int)v16);
        }
        else
        {
          switch ( (_DWORD)v16 )
          {
            case 1:
              if ( !v17 )
                v21 = *(unsigned __int8 *)v18;
              Src = v19 | v21 & ~v20;
              *(_BYTE *)v18 = Src;
              _InterlockedOr(v71, 0);
              break;
            case 2:
              if ( !v17 )
                v21 = *(unsigned __int16 *)v18;
              Src = v19 | v21 & ~v20;
              *(_WORD *)v18 = Src;
              _InterlockedOr(v71, 0);
              break;
            case 4:
              if ( !v17 )
                v21 = *(unsigned int *)v18;
              Src = v19 | v21 & ~v20;
              *(_DWORD *)v18 = Src;
              _InterlockedOr(v71, 0);
              break;
            case 8:
              if ( !v17 )
                v21 = *(_QWORD *)v18;
              Src = v19 | v21 & ~v20;
              *(_QWORD *)v18 = Src;
              KeFlushWriteBuffer();
              break;
          }
        }
        goto LABEL_22;
      }
      if ( !v17 )
      {
        if ( v63(0LL, v18, &Src, (unsigned int)v16, &v77) < 0 )
        {
LABEL_91:
          v21 = Src;
          v17 = v72;
          goto LABEL_15;
        }
        v21 = Src;
      }
      v64 = v19 | v21 & ~v20;
      v65 = &v77;
      Src = v64;
      LOBYTE(v65) = 1;
      if ( (*(int (__fastcall **)(int *, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144))(
             v65,
             v18,
             &Src,
             (unsigned int)v16,
             &v77) >= 0 )
        goto LABEL_22;
      goto LABEL_91;
    }
    v4 = 0;
  }
  v56 = v7 - 1;
  if ( !v56 )
    goto LABEL_4;
  v57 = v56 - 1;
  if ( !v57 )
    goto LABEL_6;
  if ( v57 == 1 )
    goto LABEL_45;
  return v4;
}
