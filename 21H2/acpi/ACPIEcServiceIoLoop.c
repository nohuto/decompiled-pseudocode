/*
 * XREFs of ACPIEcServiceIoLoop @ 0x1C0053B78
 * Callers:
 *     ACPIEcServiceDevice @ 0x1C0053A64 (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     ACPIEcDispatchQueries @ 0x1C00535B8 (ACPIEcDispatchQueries.c)
 *     ACPIEcLogAction @ 0x1C0053808 (ACPIEcLogAction.c)
 *     ACPIEcLogError @ 0x1C00539AC (ACPIEcLogError.c)
 */

void __fastcall ACPIEcServiceIoLoop(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  char v6; // r14
  __int64 v7; // r12
  ULONG v8; // ebx
  ULONG v9; // esi
  ULONG v10; // r15d
  ULONG v11; // esi
  KIRQL v12; // al
  unsigned __int8 v13; // dl
  KIRQL v14; // bl
  ULONG v15; // eax
  char v16; // r14
  KIRQL v17; // bl
  int *v18; // rcx
  __int64 v19; // r15
  char v20; // al
  KIRQL v21; // bl
  unsigned __int8 v22; // al
  unsigned __int64 v23; // rsi
  KIRQL v24; // bl
  unsigned int v25; // eax
  char v26; // al
  KIRQL v27; // r10
  int v28; // edx
  unsigned __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // r8
  char v32; // al
  unsigned __int16 v33; // cx
  char v34; // al
  char v35; // al
  PVOID **v36; // rcx
  PVOID **v37; // rax
  char *v38; // rax
  PLIST_ENTRY v39; // rax
  _LIST_ENTRY *Blink; // rcx
  char v41; // r8
  __int16 v42; // dx
  void (__fastcall **v43)(_QWORD, PVOID *, __int64, __int64); // rbx
  __int64 v44; // rax
  char v45; // [rsp+20h] [rbp-30h]
  ULONG v46; // [rsp+24h] [rbp-2Ch]
  ULONG v47; // [rsp+28h] [rbp-28h]
  int v48; // [rsp+2Ch] [rbp-24h] BYREF
  _DWORD *v49; // [rsp+30h] [rbp-20h]
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  PVOID *p_P; // [rsp+40h] [rbp-10h]
  char v52; // [rsp+98h] [rbp+48h]
  char v53; // [rsp+A0h] [rbp+50h]
  char v54; // [rsp+A8h] [rbp+58h]

  p_P = &P;
  v5 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v53 = 0;
  LOBYTE(a4) = 1;
  v52 = 1;
  v6 = 0;
  v54 = 0;
  v7 = 0LL;
  v45 = 0;
  v8 = 0;
  v46 = 0;
  v9 = 0;
  P = &P;
  while ( 1 )
  {
    v10 = v9;
    v11 = v8;
    if ( v7 )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      v13 = 48;
      v14 = v12;
      if ( v7 != *(_QWORD *)(a1 + 40) )
        v13 = 64;
      ACPIEcLogAction(a1, v13, v53);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v14);
      __outbyte(v7, v53);
      KeStallExecutionProcessor(1u);
      v5 = v49;
      ++v46;
      v7 = 0LL;
      v15 = 0;
      goto LABEL_7;
    }
    v46 = v10;
    v15 = v8;
    if ( v8 )
      break;
LABEL_7:
    v9 = v46;
    if ( v5 )
    {
      v49 = 0LL;
      v52 = 1;
    }
LABEL_22:
    v47 = v15 + 1;
    v20 = __inbyte(*(_QWORD *)(a1 + 32));
    v6 = v20;
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
    ACPIEcLogAction(a1, 0x10u, v6);
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v21);
    if ( v54 && (v6 & 0x10) == 0 )
    {
      ++*(_DWORD *)(a1 + 788);
      v6 |= 0x10u;
      v54 = 0;
    }
    if ( (v6 & 1) != 0 )
    {
      v22 = __inbyte(*(_QWORD *)(a1 + 24));
      v23 = v22;
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
      ACPIEcLogAction(a1, 0x20u, v23);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v24);
      a2 = (PVOID *)((unsigned int)*(unsigned __int8 *)(a1 + 488) - 1);
      if ( *(_BYTE *)(a1 + 488) == 1 )
      {
        **(_BYTE **)(a1 + 496) = v23;
        *(_BYTE *)(a1 + 488) = 5;
      }
      else
      {
        a2 = (PVOID *)((unsigned int)*(unsigned __int8 *)(a1 + 488) - 2);
        if ( *(_BYTE *)(a1 + 488) == 2 )
        {
          if ( (_BYTE)v23 )
          {
            v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
            v28 = 1 << (v23 & 0x1F);
            v29 = v23 >> 5;
            v48 = v28;
            v30 = *(_DWORD *)(a1 + 4 * (v23 >> 5) + 124);
            if ( (v30 & v28) == 0 )
            {
              *(_DWORD *)(a1 + 4 * v29 + 124) = v28 | v30;
              if ( (v28 & *(_DWORD *)(a1 + 4 * v29 + 156)) != 0 )
              {
                v31 = *(unsigned __int8 *)(v23 + a1 + 188);
                *(_BYTE *)(*(_QWORD *)(a1 + 448) + 24 * v31) = *(_BYTE *)(a1 + 445);
                *(_BYTE *)(a1 + 445) = v31;
              }
              else
              {
                *(_BYTE *)(v23 + a1 + 188) = *(_BYTE *)(a1 + 444);
                *(_BYTE *)(a1 + 444) = v23;
              }
            }
            KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v27);
            v45 = 1;
          }
          *(_BYTE *)(a1 + 488) = 0;
        }
        else if ( *(_BYTE *)(a1 + 488) == 3 )
        {
          v26 = *(_BYTE *)(a1 + 489);
          ++*(_DWORD *)(a1 + 792);
          *(_BYTE *)(a1 + 488) = v26;
          *(_BYTE *)(a1 + 489) = 7;
          v54 = 1;
        }
        else
        {
          v25 = *(_DWORD *)(a1 + 796);
          if ( v25 < 5 )
          {
            ACPIEcLogError(a1, -2147155953);
            v25 = *(_DWORD *)(a1 + 796);
          }
          *(_DWORD *)(a1 + 796) = v25 + 1;
        }
      }
      v5 = v49;
      v8 = 0;
      v9 = v46;
      LOBYTE(a4) = v52;
    }
    else
    {
      v8 = v47;
      v5 = v49;
      LOBYTE(a4) = v52;
      if ( (v6 & 2) == 0 )
      {
        a3 = 4LL;
        if ( *(_BYTE *)(a1 + 488) == 4 )
        {
          v38 = *(char **)(a1 + 496);
          *(_BYTE *)(a1 + 488) = 5;
          v53 = *v38;
LABEL_59:
          v7 = *(_QWORD *)(a1 + 24);
          goto LABEL_60;
        }
        if ( *(_BYTE *)(a1 + 488) != 5 )
        {
          if ( *(_BYTE *)(a1 + 488) != 6 )
            goto LABEL_60;
          v32 = 1;
          LOBYTE(a2) = *(_BYTE *)(a1 + 491);
          if ( *(_BYTE *)(a1 + 490) != 0x80 )
            v32 = 4;
          v53 = *(_BYTE *)(a1 + 491);
          *(_BYTE *)(a1 + 488) = v32;
          goto LABEL_59;
        }
        v33 = *(_WORD *)(a1 + 494);
        if ( v33 )
        {
          if ( (v6 & 0x10) != 0 || v33 <= 1u && (AcpiOverrideAttributes & 0x1000000) != 0 )
          {
            v35 = *(_BYTE *)(a1 + 490);
            ++*(_QWORD *)(a1 + 496);
            ++*(_BYTE *)(a1 + 491);
            v53 = v35;
            *(_WORD *)(a1 + 494) = v33 - 1;
            v34 = 6;
          }
          else
          {
            *(_BYTE *)(a1 + 489) = 5;
            v34 = 3;
            v53 = -126;
          }
          v7 = *(_QWORD *)(a1 + 40);
          *(_BYTE *)(a1 + 488) = v34;
        }
        else
        {
          v36 = (PVOID **)p_P;
          v37 = *(PVOID ***)(a1 + 480);
          *(_BYTE *)(a1 + 488) = 0;
          *(_WORD *)(a1 + 494) = 0;
          *(_QWORD *)(a1 + 480) = 0LL;
          if ( *v36 != &P )
LABEL_74:
            __fastfail(3u);
          v37[1] = (PVOID *)v36;
          a2 = &P;
          *v37 = &P;
          *v36 = (PVOID *)v37;
          p_P = (PVOID *)v37;
        }
LABEL_60:
        v5 = v49;
        if ( !v7 && !*(_BYTE *)(a1 + 488) )
        {
          *(_BYTE *)(a1 + 504) = 0;
          if ( (v6 & 0x20) != 0 )
          {
            v7 = *(_QWORD *)(a1 + 40);
            *(_BYTE *)(a1 + 488) = 2;
            v53 = -124;
            KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
          }
          else
          {
            v39 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 464), (PKSPIN_LOCK)(a1 + 88));
            if ( v39 )
            {
              *(_QWORD *)(a1 + 480) = v39;
              v8 = 0;
              Blink = v39[1].Blink;
              *(_QWORD *)(a1 + 496) = Blink;
              v41 = BYTE1(v39[1].Flink);
              *(_BYTE *)(a1 + 491) = v41;
              v42 = WORD1(v39[1].Flink);
              *(_WORD *)(a1 + 492) = v42;
              *(_BYTE *)(a1 + 490) = v39[1].Flink;
              *(_BYTE *)(a1 + 491) = v41 - 1;
              *(_WORD *)(a1 + 494) = v42;
              *(_QWORD *)(a1 + 496) = (char *)Blink - 1;
              *(_BYTE *)(a1 + 488) = 5;
              KeSetTimer((PKTIMER)(a1 + 520), ACPIEcWatchdogTimeout, (PKDPC)(a1 + 584));
            }
            else
            {
              v52 = 0;
              KeCancelTimer((PKTIMER)(a1 + 520));
            }
          }
          v5 = v49;
          LOBYTE(a4) = v52;
        }
      }
    }
  }
  if ( !v5 )
  {
    v16 = v6 & 0x10;
    if ( (_BYTE)a4 )
    {
      v46 = v10 + v8;
      KeStallExecutionProcessor(v8);
      v15 = v8;
      if ( v16 )
      {
        if ( v8 >= *(_DWORD *)(a1 + 64) )
          v49 = (_DWORD *)(a1 + 780);
      }
      else
      {
        v19 = a1 + 776;
        if ( v8 < *(_DWORD *)(a1 + 68) )
          v19 = 0LL;
        v49 = (_DWORD *)v19;
      }
      v9 = v46;
    }
    else
    {
      if ( v16 )
      {
        v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
        ACPIEcLogAction(a1, 0x30u, 131);
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), v17);
        __outbyte(*(_QWORD *)(a1 + 40), 0x83u);
        v18 = (int *)(a1 + 784);
      }
      else
      {
        v18 = &v48;
      }
      v15 = v11;
      v49 = v18;
      v9 = v10;
      v46 = v10;
    }
    goto LABEL_22;
  }
  ++*v5;
  if ( v10 > *(_DWORD *)(a1 + 800) )
    *(_DWORD *)(a1 + 800) = v10;
  while ( 1 )
  {
    v43 = (void (__fastcall **)(_QWORD, PVOID *, __int64, __int64))P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_74;
    v44 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_74;
    P = *(PVOID *)P;
    *(_QWORD *)(v44 + 8) = &P;
    v43[4](v43[5], a2, a3, a4);
    ExFreePoolWithTag(v43, 0);
  }
  if ( v45 )
    ACPIEcDispatchQueries(a1);
}
