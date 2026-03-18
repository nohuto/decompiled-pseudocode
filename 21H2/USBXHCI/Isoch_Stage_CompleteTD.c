/*
 * XREFs of Isoch_Stage_CompleteTD @ 0x1C00070C0
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0006DF0 (Isoch_ProcessTransferEventWithED1.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C000AB84 (Isoch_ProcessTransferEventWithED0.c)
 *     Isoch_Transfer_CompleteStaleStages @ 0x1C0043454 (Isoch_Transfer_CompleteStaleStages.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqd @ 0x1C0001330 (WPP_RECORDER_SF_DDqd.c)
 *     WPP_RECORDER_SF_DDqdDDDD @ 0x1C0007770 (WPP_RECORDER_SF_DDqdDDDD.c)
 *     WPP_RECORDER_SF_DDqq @ 0x1C00084E0 (WPP_RECORDER_SF_DDqq.c)
 *     WPP_RECORDER_SF_DDqqD @ 0x1C0008C60 (WPP_RECORDER_SF_DDqqD.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     TR_SendCompleteStageRequest @ 0x1C003FE60 (TR_SendCompleteStageRequest.c)
 *     SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C004FF90 (SecureDmaEnabler_ReleaseResourcesAfterDma.c)
 */

__int64 __fastcall Isoch_Stage_CompleteTD(unsigned __int8 *a1, int a2, int a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 *v6; // rbx
  int v7; // r13d
  int v8; // edi
  int v11; // r12d
  __int64 result; // rax
  __int64 v13; // rbp
  __int64 v14; // r14
  unsigned int v15; // edi
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // edx
  __int64 v19; // rdi
  __int64 v20; // r14
  KIRQL v21; // r15
  __int64 v22; // r8
  unsigned __int8 *v23; // r15
  __int64 *v24; // r14
  __int64 *v25; // rdi
  __int64 *v26; // r14
  __int64 *v27; // rdi
  int v28; // eax
  int v29; // edx
  unsigned int v30; // r8d
  __int64 *v31; // rax
  __int64 **v32; // rcx
  int v33; // eax
  __int64 v34; // r9
  _DWORD *v35; // rcx
  int v36; // r8d
  __int64 v37; // rdx
  unsigned int v38; // eax
  int v39; // eax
  int v40; // eax
  struct _MDL *v41; // rcx
  __int64 v42; // r8
  KIRQL v43; // di
  KIRQL v44; // dl
  __int64 v45; // rdx
  __int64 v46; // rcx
  int v47; // edx
  __int64 v48; // rcx
  __int64 **v49; // rcx
  int v50; // edx
  int v51; // [rsp+20h] [rbp-98h]
  __int64 v52; // [rsp+28h] [rbp-90h]
  __int64 v53; // [rsp+30h] [rbp-88h]
  __int64 v54; // [rsp+40h] [rbp-78h]
  __int64 v55; // [rsp+70h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp+8h]
  char v58; // [rsp+D8h] [rbp+20h]

  v58 = a4;
  v6 = *(__int64 **)a1;
  v7 = a3;
  v8 = *((_DWORD *)a1 + 12);
  v11 = -1073545216;
  *a6 = 0;
  result = (__int64)a5;
  v13 = v6[7];
  v14 = v6[6] + 140;
  *a5 = 0;
  v15 = v8 - 1;
  if ( v15 )
  {
    result = 3LL * (v15 - 1);
    if ( *(_DWORD *)(v14 + 12LL * (v15 - 1) + 8) == -1 )
    {
      result = (int)(v15 - 1);
      v56 = result;
      if ( result >= 0 )
      {
        v46 = 12 * result;
        v55 = 12 * result;
        do
        {
          if ( *(_DWORD *)(v46 + v14 + 8) != -1 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v47 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
            LOBYTE(v47) = 2;
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
              v47,
              a3,
              24,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
              v6[3],
              (char)a1);
            result = v56;
            v46 = v55;
          }
          --result;
          *(_DWORD *)(v46 + v14 + 8) = -1073545216;
          v46 -= 12LL;
          v56 = result;
          v55 = v46;
        }
        while ( result >= 0 );
        v7 = a3;
        a4 = v58;
      }
    }
  }
  v16 = v14 + 12LL * v15;
  if ( *(_DWORD *)(v16 + 8) == -1 )
  {
    result = (unsigned int)(a2 - 26);
    if ( (unsigned int)result > 2 || v7 )
    {
      if ( a2 == 1 )
      {
LABEL_6:
        v11 = 0;
      }
      else
      {
        switch ( a2 )
        {
          case 0:
            v11 = -1;
            break;
          case 2:
            v11 = -1073741805;
            break;
          case 3:
          case 31:
            v11 = -1073741806;
            break;
          case 6:
            v11 = -1073741820;
            break;
          case 10:
            v11 = -1073741803;
            break;
          case 13:
          case 26:
          case 28:
            goto LABEL_6;
          case 20:
            v11 = -1073741804;
            break;
          case 23:
            break;
          case 27:
            v11 = -1073610752;
            break;
          case 34:
            v11 = -1073741802;
            break;
          case 199:
            v11 = -1073741807;
            if ( (*(_QWORD *)(*(_QWORD *)(v13 + 40) + 336LL) & 0x4000000000000000LL) != 0 )
              v11 = -1073709056;
            break;
          default:
            v11 = -1073741807;
            break;
        }
      }
      *(_DWORD *)(v16 + 8) = v11;
      *((_DWORD *)v6 + 21) += v7;
      result = *(_QWORD *)(v13 + 56);
      if ( *(_DWORD *)(result + 120) == 5 )
        *(_DWORD *)(v16 + 4) = v7;
    }
  }
  v17 = *((_DWORD *)a1 + 11);
  if ( v15 == v17 )
  {
    if ( !a4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        result = (__int64)WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v50 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
          LOBYTE(v50) = 5;
          return WPP_RECORDER_SF_DDqqD(
                   *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
                   v50,
                   v17 - *((_DWORD *)a1 + 10) + 1,
                   26,
                   v51,
                   *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
                   *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
                   v6[3],
                   (char)a1,
                   (unsigned __int8)v17 - a1[40] + 1);
        }
      }
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
        v18,
        v17 - *((_DWORD *)a1 + 10) + 1,
        25,
        v51,
        *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
        v6[3],
        (char)a1,
        v17 - a1[40] + 1);
    }
    if ( *(_BYTE *)(v13 + 280) )
    {
      if ( *((_DWORD *)a1 + 40) )
      {
        TR_SendCompleteStageRequest(v13);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 104LL), a1 + 128);
      }
    }
    else if ( *((_QWORD *)a1 + 9) )
    {
      v19 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 96LL) + 24LL);
      v21 = KfRaiseIrql(2u);
      LOBYTE(v22) = (*(_DWORD *)(v19 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v20 + 8) + 96LL))(v20, *((_QWORD *)a1 + 9), v22);
      KeLowerIrql(v21);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
    v23 = *(unsigned __int8 **)a1;
    if ( a1[56] )
    {
      IoFreeMdl(*((PMDL *)a1 + 8));
      *((_QWORD *)a1 + 8) = 0LL;
      a1[56] = 0;
    }
    v24 = (__int64 *)*((_QWORD *)a1 + 1);
    v25 = (__int64 *)(a1 + 8);
    if ( v24 != (__int64 *)(a1 + 8) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v13 + 40) + 336LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset((void *)v24[2], 0, *((unsigned int *)v24 + 11));
          v24 = (__int64 *)*v24;
        }
        while ( v25 != v24 );
        v24 = (__int64 *)*v25;
      }
      v45 = v13 + 208;
      if ( v24 != v25 )
      {
        **((_QWORD **)a1 + 2) = *(_QWORD *)v45;
        *(_QWORD *)(*(_QWORD *)v45 + 8LL) = *((_QWORD *)a1 + 2);
        *(_QWORD *)v45 = *v25;
        *(_QWORD *)(*v25 + 8) = v45;
        *((_QWORD *)a1 + 2) = a1 + 8;
        *v25 = (__int64)v25;
      }
    }
    v26 = (__int64 *)*((_QWORD *)a1 + 3);
    v27 = (__int64 *)(a1 + 24);
    if ( v26 != (__int64 *)(a1 + 24) )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(v13 + 40) + 336LL) & 0x4000000000000LL) != 0 )
      {
        do
        {
          memset((void *)v26[2], 0, *((unsigned int *)v26 + 11));
          v26 = (__int64 *)*v26;
        }
        while ( v27 != v26 );
        v26 = (__int64 *)*v27;
      }
      if ( v26 != v27 )
      {
        **(_QWORD **)(v13 + 216) = v26;
        *(_QWORD *)(*v27 + 8) = *(_QWORD *)(v13 + 216);
        **((_QWORD **)a1 + 4) = v13 + 208;
        *(_QWORD *)(v13 + 216) = *((_QWORD *)a1 + 4);
        *((_QWORD *)a1 + 4) = a1 + 24;
        *v27 = (__int64)v27;
      }
    }
    v28 = v23[128];
    v29 = v23[132];
    --v23[130];
    v30 = v23[129];
    if ( a1 == &v23[v29 * v28 + 144] )
      v23[132] = (v29 + 1) % v30;
    else
      v23[131] = (int)(v30 + v23[131] - 1) % (int)v30;
    ++*((_DWORD *)v6 + 28);
    if ( *((_DWORD *)v6 + 25) != *((_DWORD *)v6 + 24) )
      goto LABEL_51;
    if ( *((_DWORD *)v6 + 16) == 1 )
    {
      v31 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) == v6 )
      {
        v32 = (__int64 **)v6[1];
        if ( *v32 == v6 )
        {
          *v32 = v31;
          v31[1] = (__int64)v32;
          v33 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2048))(
                  WdfDriverGlobals,
                  v6[3]);
          if ( v33 >= 0 )
          {
            *((_DWORD *)v6 + 16) = 0;
LABEL_34:
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), *(_BYTE *)(v13 + 104));
            v34 = v6[6];
            if ( *(_WORD *)(v34 + 2) == 10 )
            {
LABEL_35:
              v35 = (_DWORD *)(v34 + 36);
            }
            else
            {
              switch ( *(_WORD *)(v34 + 2) )
              {
                case '9':
                case ':':
                  v35 = (_DWORD *)(v34 + 52);
                  break;
                default:
                  goto LABEL_35;
              }
            }
            v36 = 0;
            *v35 = *((_DWORD *)v6 + 21);
            v37 = 0LL;
            v38 = *((_DWORD *)v6 + 24);
            if ( v38 )
            {
              while ( 1 )
              {
                v39 = *(_DWORD *)(v34 + 12 * v37 + 148);
                if ( v39 == -1 )
                  break;
                if ( v39 )
                  goto LABEL_91;
                ++v36;
LABEL_40:
                ++*(_DWORD *)(v13 + 256);
                v37 = (unsigned int)(v37 + 1);
                v38 = *((_DWORD *)v6 + 24);
                if ( (unsigned int)v37 >= v38 )
                  goto LABEL_41;
              }
              *(_DWORD *)(v34 + 12 * v37 + 148) = -1073610752;
LABEL_91:
              ++*(_DWORD *)(v34 + 136);
              ++*(_DWORD *)(v13 + 260);
              goto LABEL_40;
            }
LABEL_41:
            if ( *(_DWORD *)(v34 + 136) == v38 )
            {
              *(_DWORD *)(v34 + 4) = -1073739008;
              v40 = -1073741823;
            }
            else
            {
              *(_DWORD *)(v34 + 4) = 0;
              v40 = 0;
            }
            *((_DWORD *)v6 + 17) = v40;
            ++*(_DWORD *)(v13 + 240);
            *(_QWORD *)(v13 + 248) += *((unsigned int *)v6 + 21);
            if ( *((int *)v6 + 17) < 0 )
              ++*(_DWORD *)(v13 + 244);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqdDDDD(
                *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL),
                v36,
                v34,
                v51,
                *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
                v6[3],
                *((_DWORD *)v6 + 17),
                *(_DWORD *)(v34 + 128),
                v36,
                *((_DWORD *)v6 + 24),
                *((_DWORD *)v6 + 21));
            v41 = (struct _MDL *)v6[9];
            if ( v41 )
            {
              v42 = v6[6];
              switch ( *(_WORD *)(v42 + 2) )
              {
                case '9':
                case ':':
                  goto LABEL_94;
                default:
                  if ( v41 != *(struct _MDL **)(v42 + 48) )
                  {
LABEL_94:
                    IoFreeMdl(v41);
                    v6[9] = 0LL;
                  }
                  break;
              }
            }
            *((_BYTE *)v6 + 16) = 0;
            v43 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
              WdfDriverGlobals,
              v6[3],
              *((unsigned int *)v6 + 17));
            KeLowerIrql(v43);
            *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
LABEL_51:
            --*(_DWORD *)(v13 + 376);
            v44 = *(_BYTE *)(v13 + 104);
            *a6 = *(_DWORD *)(v13 + 376);
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), v44);
            result = (__int64)a5;
            *a5 = 1;
            return result;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v48 = *(_QWORD *)(v13 + 56);
            LODWORD(v54) = v33;
            LODWORD(v53) = *(_DWORD *)(v48 + 144);
            LODWORD(v52) = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(v48 + 80),
              4u,
              *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL),
              0x11u,
              (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
              v52,
              v53,
              v6[3],
              v54);
          }
          *((_DWORD *)v6 + 16) = 2;
          v49 = *(__int64 ***)(v13 + 408);
          if ( *v49 == (__int64 *)(v13 + 400) )
          {
            *v6 = v13 + 400;
            v6[1] = (__int64)v49;
            *v49 = v6;
            *(_QWORD *)(v13 + 408) = v6;
            goto LABEL_51;
          }
        }
      }
      __fastfail(3u);
    }
    if ( *((_DWORD *)v6 + 16) == 3 )
      goto LABEL_51;
    goto LABEL_34;
  }
  return result;
}
