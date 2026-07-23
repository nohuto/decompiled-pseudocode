/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1406DFC20
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x14088A5F0 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x14088A650 (FsRtlNotifyReportChange.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140202D60 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140202EF0 (ExReleaseFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
 *     PsChargePoolQuota @ 0x140339960 (PsChargePoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x1403502F0 (FsRtlIsNtstatusExpected.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406E0E64 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1406E1574 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x14074DC80 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __stdcall FsRtlNotifyFilterReportChange(
        PNOTIFY_SYNC NotifySync,
        PLIST_ENTRY NotifyList,
        PSTRING FullTargetName,
        USHORT TargetNameOffset,
        PSTRING StreamName,
        PSTRING NormalizedParentName,
        ULONG FilterMatch,
        ULONG Action,
        PVOID TargetContext,
        PVOID FilterContext)
{
  USHORT v10; // r14
  PSTRING v11; // r12
  USHORT v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  _LIST_ENTRY *Flink; // r13
  _LIST_ENTRY *v16; // rdi
  _LIST_ENTRY *v17; // r11
  char v18; // dl
  char v19; // r15
  __int16 v20; // r8
  unsigned int Flink_high; // r13d
  _LIST_ENTRY *v22; // rcx
  unsigned __int16 v23; // ax
  int v24; // r14d
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  struct _LIST_ENTRY *v27; // rbx
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rcx
  struct _LIST_ENTRY *PoolWithTag; // rax
  __int64 Blink_low; // rax
  _LIST_ENTRY *v33; // rbx
  __int16 v34; // ax
  __int16 v35; // ax
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v37; // cx
  struct _LIST_ENTRY *v38; // rdx
  PSTRING v39; // r10
  USHORT v40; // cx
  __int16 Flink_low; // ax
  __int16 v42; // ax
  char *v43; // rax
  bool v44; // zf
  struct _LIST_ENTRY *v45; // rax
  struct _LIST_ENTRY *v46; // rax
  __int16 v47; // r8
  char *v48; // r9
  int v49; // r8d
  int v50; // edx
  USHORT v51; // cx
  __int16 v52; // ax
  char v53; // r9
  int v54; // edx
  int v55; // r10d
  unsigned int v56; // r8d
  int v57; // ebx
  struct _LIST_ENTRY *v58; // r11
  char *v59; // r8
  int v60; // r14d
  ULONG v61; // eax
  char v62; // [rsp+40h] [rbp-F8h]
  USHORT v63; // [rsp+42h] [rbp-F6h]
  unsigned __int16 Length; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 v66; // [rsp+50h] [rbp-E8h]
  int v67; // [rsp+54h] [rbp-E4h]
  _LIST_ENTRY *v68; // [rsp+70h] [rbp-C8h]
  _LIST_ENTRY *v69; // [rsp+78h] [rbp-C0h]
  OEM_STRING OemString; // [rsp+80h] [rbp-B8h] BYREF
  int v71; // [rsp+90h] [rbp-A8h]
  __int64 v72; // [rsp+98h] [rbp-A0h]
  char *Buffer; // [rsp+A0h] [rbp-98h]
  OEM_STRING v74; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int v75; // [rsp+B8h] [rbp-80h]
  unsigned int v76; // [rsp+BCh] [rbp-7Ch]
  struct _LIST_ENTRY **p_Blink; // [rsp+C0h] [rbp-78h]
  _LIST_ENTRY *v78; // [rsp+C8h] [rbp-70h]
  _LIST_ENTRY *v79; // [rsp+D0h] [rbp-68h]
  _OWORD v80[6]; // [rsp+D8h] [rbp-60h] BYREF
  _LIST_ENTRY *v82; // [rsp+148h] [rbp+10h]

  v82 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v13 = TargetNameOffset;
  v80[0] = 0LL;
  v72 = 0LL;
  *(_QWORD *)&v74.Length = 0LL;
  OemString = 0LL;
  v62 = 0;
  v71 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  Buffer = 0LL;
  v74.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v13 = v10;
    NotifyList = v82;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  v63 = v72;
  Length = v74.Length;
  v66 = OemString.Length;
  while ( 1 )
  {
    v79 = Flink;
    v69 = Flink;
    if ( Flink == NotifyList )
      break;
    v16 = Flink - 2;
    v78 = Flink - 2;
    v17 = Flink - 2;
    v68 = Flink - 2;
    if ( v11 )
    {
      Blink = v16[8].Blink;
      v37 = (unsigned __int16)Blink->Flink;
      if ( LOWORD(Blink->Flink) && (HIDWORD(v16[4].Blink) & FilterMatch) != 0 )
      {
        v38 = v16[8].Blink;
        v39 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v80[0] + 1) = v11->Buffer;
          v40 = v10;
          LOWORD(v80[0]) = v10;
          Flink_low = LOBYTE(v16[9].Flink);
          if ( v13 != Flink_low )
          {
            v40 = v13 - Flink_low;
            LOWORD(v80[0]) = v13 - Flink_low;
          }
          WORD1(v80[0]) = v40;
          v39 = (PSTRING)v80;
          NormalizedParentName = (PSTRING)v80;
          Blink = v16[8].Blink;
          v38 = Blink;
          v37 = (unsigned __int16)Blink->Flink;
        }
        if ( v37 <= v39->Length )
        {
          if ( v37 == v39->Length )
          {
            v19 = 1;
            goto LABEL_60;
          }
          v42 = (__int16)v16[4].Blink;
          if ( (v42 & 1) != 0 )
          {
            if ( (v42 & 0x10) != 0
              || ((v43 = &v39->Buffer[LOWORD(v38->Flink)], LOBYTE(v16[9].Flink) != 1)
                ? (v44 = *(_WORD *)v43 == 92)
                : (v44 = *v43 == 92),
                  v44) )
            {
              v19 = 0;
LABEL_60:
              if ( !memcmp(Blink->Blink, v39->Buffer, v37)
                && (v19
                 || (v45 = v16[1].Flink) == 0LL
                 || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v45)(
                      v16->Blink,
                      TargetContext,
                      v16[1].Blink)) )
              {
                v46 = v16[4].Flink;
                if ( !v46
                  || !FilterContext
                  || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v46)(v16->Blink, FilterContext) )
                {
                  v17 = Flink - 2;
                  v18 = v62;
LABEL_10:
                  v20 = (__int16)v16[4].Blink;
                  if ( (v20 & 2) != 0 )
                  {
                    v33 = Flink - 2;
                  }
                  else
                  {
                    Flink_high = (unsigned int)v16[6].Flink;
                    if ( Flink_high )
                    {
                      p_Blink = 0LL;
                      if ( HIDWORD(v16[6].Flink) )
                      {
                        Flink_high = HIDWORD(v16[6].Flink);
                      }
                      else
                      {
                        v22 = v16[3].Flink;
                        if ( v22 != &v16[3] )
                        {
                          p_Blink = &v22[-11].Blink;
                          Flink_high = (unsigned int)v22[1].Flink->Blink;
                        }
                      }
                      if ( v19 )
                      {
                        v23 = 0;
                        v66 = 0;
                        OemString.Length = 0;
                      }
                      else if ( v18 )
                      {
                        v23 = v66;
                      }
                      else
                      {
                        v47 = v20 & 0x10;
                        if ( v47 || (v48 = NormalizedParentName->Buffer, v48 != v11->Buffer) )
                        {
                          if ( Buffer )
                          {
                            v51 = v63;
                          }
                          else
                          {
                            Buffer = v11->Buffer;
                            v51 = v10;
                            v63 = v10;
                            LOWORD(v72) = v10;
                            v52 = LOBYTE(v16[9].Flink);
                            if ( TargetNameOffset != v52 )
                            {
                              v51 = TargetNameOffset - v52;
                              v63 = TargetNameOffset - v52;
                              LOWORD(v72) = TargetNameOffset - v52;
                            }
                            WORD1(v72) = v51;
                          }
                          v53 = 0;
                          v54 = 0;
                          if ( v47 )
                          {
                            v59 = Buffer;
                          }
                          else
                          {
                            v55 = 1;
                            v56 = 0;
                            v57 = LOBYTE(v16[9].Flink);
                            v58 = v17[8].Blink;
                            if ( (_BYTE)v57 == 1 )
                            {
                              while ( v56 < LOWORD(v58->Flink) )
                              {
                                if ( *((_BYTE *)&v58->Blink->Flink + v56) == 92 )
                                  ++v55;
                                ++v56;
                              }
                              v59 = Buffer;
                              while ( Buffer[v54] != 92 || (unsigned __int8)++v53 != v55 )
                                ++v54;
                            }
                            else
                            {
                              while ( v56 < LOWORD(v58->Flink) >> 1 )
                              {
                                if ( *((_WORD *)&v58->Blink->Flink + v56) == 92 )
                                  ++v55;
                                ++v56;
                              }
                              v59 = Buffer;
                              while ( *(_WORD *)&Buffer[2 * v54] != 92 || (unsigned __int8)++v53 != v55 )
                                ++v54;
                              v54 *= v57;
                            }
                            v51 = v63;
                          }
                          v67 = LOBYTE(v16[9].Flink) + v54;
                          OemString.Buffer = &v59[v67];
                          v23 = v51 - v67;
                        }
                        else
                        {
                          v49 = (int)v16[8].Blink->Flink;
                          v50 = LOBYTE(v16[9].Flink);
                          OemString.Buffer = &v48[v50 + v49];
                          v23 = NormalizedParentName->Length - v50 - v49;
                        }
                        v66 = v23;
                        OemString.Length = v23;
                        OemString.MaximumLength = v23;
                      }
                      v24 = 12;
                      if ( v62 )
                      {
                        v25 = StreamName->Length + 12;
                      }
                      else
                      {
                        if ( !v19 )
                        {
                          if ( LOBYTE(v16[9].Flink) == 1 )
                            v60 = RtlxOemStringToUnicodeSize(&OemString) + 10;
                          else
                            v60 = v23 + 12;
                          v24 = v60 + 2;
                        }
                        if ( v74.Buffer )
                        {
                          LOWORD(v61) = Length;
                        }
                        else
                        {
                          v74.Buffer = &v11->Buffer[TargetNameOffset];
                          LOWORD(v61) = v11->Length - TargetNameOffset;
                          Length = v61;
                          v74.Length = v61;
                          v74.MaximumLength = v61;
                        }
                        if ( LOBYTE(v16[9].Flink) == 1 )
                          v61 = RtlxOemStringToUnicodeSize(&v74) - 2;
                        else
                          v61 = (unsigned __int16)v61;
                        v25 = v61 + v24;
                        if ( StreamName )
                        {
                          if ( LOBYTE(v16[9].Flink) == 2 )
                            v25 += StreamName->Length + 2;
                          else
                            v25 += RtlxOemStringToUnicodeSize(StreamName);
                        }
                      }
                      v26 = (LODWORD(v16[6].Blink) + 3) & 0xFFFFFFFC;
                      v75 = v26;
                      if ( v25 > Flink_high || (v76 = v26 + v25, v26 + v25 > Flink_high) )
                      {
                        LOWORD(v16[4].Blink) |= 2u;
                        v34 = (__int16)v16[4].Blink;
                        v33 = v16;
                      }
                      else
                      {
                        v27 = 0LL;
                        v28 = v16[5].Blink;
                        if ( v28 )
                        {
                          *(_DWORD *)((char *)&v28->Flink + HIDWORD(v16[6].Blink)) = v26 - HIDWORD(v16[6].Blink);
                          HIDWORD(v16[6].Blink) = v26;
                          v27 = (struct _LIST_ENTRY *)((char *)v16[5].Blink + v26);
                        }
                        else
                        {
                          if ( !p_Blink )
                            goto LABEL_26;
                          v29 = p_Blink[3];
                          if ( v29 )
                          {
                            v27 = p_Blink[3];
                            v16[5].Blink = v29;
                          }
                          else
                          {
                            v30 = p_Blink[1];
                            if ( !v30 )
                              goto LABEL_26;
                            if ( (BYTE2(v30->Blink) & 5) != 0 )
                              v27 = v30[1].Blink;
                            else
                              v27 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                            (PMDL)v30,
                                                            0,
                                                            MmCached,
                                                            0LL,
                                                            0,
                                                            0x40000010u);
                            v16[5].Blink = v27;
                          }
                          HIDWORD(v16[6].Flink) = Flink_high;
                        }
LABEL_26:
                        if ( !v16[5].Blink )
                        {
                          PsChargePoolQuota((PEPROCESS)v16[7].Blink, PagedPool, Flink_high);
                          PoolWithTag = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                                                (POOL_TYPE)17,
                                                                Flink_high,
                                                                0x4E725346u);
                          v16[5].Blink = PoolWithTag;
                          v16[5].Flink = PoolWithTag;
                          HIDWORD(v16[6].Flink) = Flink_high;
                          v27 = v16[5].Blink;
                        }
                        if ( v27 )
                        {
                          Blink_low = LODWORD(v16[6].Blink);
                          if ( v26 > (unsigned int)Blink_low )
                            memset((char *)v16[5].Blink + Blink_low, 0, v26 - (unsigned int)Blink_low);
                          if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                                  (_DWORD)v27,
                                                  Action,
                                                  (unsigned int)&OemString,
                                                  (unsigned int)&v74,
                                                  (__int64)StreamName,
                                                  LOBYTE(v16[9].Flink) == 2,
                                                  v25) )
                            LODWORD(v16[6].Blink) = v26 + v25;
                          else
                            LOWORD(v16[4].Blink) |= 2u;
                        }
                        v33 = v68;
                        v34 = (__int16)v68[4].Blink;
                      }
                      if ( (v34 & 2) != 0 && v16[5].Blink )
                      {
                        if ( v16[5].Flink )
                        {
                          PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v16[7].Blink, HIDWORD(v16[6].Flink));
                          ExFreePoolWithTag(v16[5].Flink, 0);
                        }
                        v16[5].Blink = 0LL;
                        v16[5].Flink = 0LL;
                        v16[6].Blink = 0LL;
                        HIDWORD(v16[6].Flink) = 0;
                      }
                      v11 = FullTargetName;
                      v10 = TargetNameOffset;
                    }
                    else
                    {
                      v33 = v16;
                    }
                    Flink = v69;
                  }
                  v35 = (__int16)v33[4].Blink;
                  if ( Action == 4 )
                  {
                    LOWORD(v33[4].Blink) = v35 | 8;
                  }
                  else
                  {
                    LOWORD(v33[4].Blink) = v35 & 0xFFF7;
                    if ( v16[3].Flink != &v16[3] )
                      FsRtlNotifyCompleteIrpList(v16, 0LL);
                  }
                }
              }
            }
          }
        }
        NotifyList = v82;
      }
    }
    else if ( TargetContext == v16[1].Blink )
    {
      OemString.Buffer = 0LL;
      v66 = 0;
      OemString.Length = 0;
      v18 = 1;
      v62 = 1;
      v19 = 0;
      goto LABEL_10;
    }
    Flink = Flink->Flink;
    v13 = TargetNameOffset;
  }
  v44 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v44 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
