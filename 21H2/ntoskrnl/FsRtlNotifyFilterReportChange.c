/*
 * XREFs of FsRtlNotifyFilterReportChange @ 0x1406AA510
 * Callers:
 *     FsRtlNotifyFullReportChange @ 0x140930160 (FsRtlNotifyFullReportChange.c)
 *     FsRtlNotifyReportChange @ 0x1409301C0 (FsRtlNotifyReportChange.c)
 * Callees:
 *     PsChargePoolQuota @ 0x1402331B0 (PsChargePoolQuota.c)
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     FsRtlNotifyCompleteIrpList @ 0x1406ABBF4 (FsRtlNotifyCompleteIrpList.c)
 *     FsRtlNotifyUpdateBuffer @ 0x1406AC4B0 (FsRtlNotifyUpdateBuffer.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407F9CA0 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  struct _LIST_ENTRY *v13; // r8
  struct _KTHREAD *CurrentThread; // rbx
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v16; // rsi
  struct _LIST_ENTRY *v17; // rbx
  char v18; // r11
  char v19; // r15
  __int16 v20; // cx
  __int16 v21; // ax
  unsigned int Flink_high; // r13d
  struct _LIST_ENTRY *v23; // rdx
  unsigned __int16 v24; // ax
  int v25; // r14d
  unsigned int v26; // r14d
  unsigned int v27; // r15d
  struct _LIST_ENTRY *v28; // rbx
  struct _LIST_ENTRY *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  struct _LIST_ENTRY *v31; // rcx
  __int64 Pool2; // rax
  __int64 Blink_low; // rax
  __int16 v34; // cx
  struct _LIST_ENTRY *Blink; // r9
  unsigned __int16 v36; // cx
  struct _LIST_ENTRY *v37; // rdx
  PSTRING v38; // r10
  USHORT v39; // cx
  __int16 Flink_low; // ax
  __int16 v41; // ax
  char *v42; // rax
  bool v43; // zf
  struct _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *v45; // rax
  __int16 v46; // cx
  char *v47; // r9
  int v48; // edx
  __int16 v49; // ax
  char v50; // r9
  int v51; // edx
  int v52; // r10d
  int v53; // ebx
  struct _LIST_ENTRY *v54; // r11
  char *v55; // rcx
  int v56; // r14d
  ULONG v57; // eax
  char v58; // [rsp+40h] [rbp-F8h]
  USHORT v59; // [rsp+44h] [rbp-F4h]
  unsigned __int16 Length; // [rsp+4Ch] [rbp-ECh]
  unsigned __int16 v62; // [rsp+50h] [rbp-E8h]
  int v63; // [rsp+54h] [rbp-E4h]
  struct _LIST_ENTRY *v64; // [rsp+70h] [rbp-C8h]
  STRING OemString; // [rsp+78h] [rbp-C0h] BYREF
  int v66; // [rsp+88h] [rbp-B0h]
  __int64 v67; // [rsp+90h] [rbp-A8h]
  char *Buffer; // [rsp+98h] [rbp-A0h]
  STRING v69; // [rsp+A0h] [rbp-98h] BYREF
  unsigned int v70; // [rsp+B0h] [rbp-88h]
  unsigned int v71; // [rsp+B4h] [rbp-84h]
  struct _LIST_ENTRY *v72; // [rsp+B8h] [rbp-80h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C0h] [rbp-78h]
  struct _LIST_ENTRY *v74; // [rsp+C8h] [rbp-70h]
  struct _LIST_ENTRY *v75; // [rsp+D0h] [rbp-68h]
  __int128 v76; // [rsp+D8h] [rbp-60h] BYREF
  struct _LIST_ENTRY *v77; // [rsp+F0h] [rbp-48h]
  struct _LIST_ENTRY *v79; // [rsp+148h] [rbp+10h]

  v79 = NotifyList;
  v10 = TargetNameOffset;
  v11 = FullTargetName;
  v13 = (struct _LIST_ENTRY *)TargetNameOffset;
  v76 = 0LL;
  v67 = 0LL;
  *(_QWORD *)&v69.Length = 0LL;
  OemString = 0LL;
  v58 = 0;
  v66 = 0;
  if ( !TargetNameOffset && v11 )
    return;
  Buffer = 0LL;
  v69.Buffer = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != *((struct _KTHREAD **)NotifySync + 7) )
  {
    ExAcquireFastMutexUnsafe((PFAST_MUTEX)NotifySync);
    *((_QWORD *)NotifySync + 7) = CurrentThread;
    v13 = (struct _LIST_ENTRY *)v10;
    NotifyList = v79;
  }
  ++*((_DWORD *)NotifySync + 16);
  Flink = NotifyList->Flink;
  v59 = v67;
  Length = v69.Length;
  v62 = OemString.Length;
  while ( 1 )
  {
    v75 = Flink;
    v64 = Flink;
    if ( Flink == NotifyList )
      break;
    v16 = Flink - 2;
    v74 = Flink - 2;
    v77 = Flink - 2;
    v17 = Flink - 2;
    v72 = Flink - 2;
    if ( v11 )
    {
      Blink = v16[8].Blink;
      v36 = (unsigned __int16)Blink->Flink;
      if ( LOWORD(Blink->Flink) && (HIDWORD(v16[4].Blink) & FilterMatch) != 0 )
      {
        v37 = v16[8].Blink;
        v38 = NormalizedParentName;
        if ( !NormalizedParentName )
        {
          *((_QWORD *)&v76 + 1) = v11->Buffer;
          v39 = v10;
          LOWORD(v76) = v10;
          Flink_low = LOBYTE(v16[9].Flink);
          if ( (_WORD)v13 != Flink_low )
          {
            v39 = (_WORD)v13 - Flink_low;
            LOWORD(v76) = (_WORD)v13 - Flink_low;
          }
          WORD1(v76) = v39;
          v38 = (PSTRING)&v76;
          NormalizedParentName = (PSTRING)&v76;
          Blink = v16[8].Blink;
          v37 = Blink;
          v36 = (unsigned __int16)Blink->Flink;
        }
        if ( v36 <= v38->Length )
        {
          if ( v36 == v38->Length )
          {
            v19 = 1;
            goto LABEL_60;
          }
          v41 = (__int16)v16[4].Blink;
          if ( (v41 & 1) != 0 )
          {
            if ( (v41 & 0x10) != 0
              || ((v42 = &v38->Buffer[LOWORD(v37->Flink)], LOBYTE(v16[9].Flink) != 1)
                ? (v43 = *(_WORD *)v42 == 92)
                : (v43 = *v42 == 92),
                  v43) )
            {
              v19 = 0;
LABEL_60:
              if ( !memcmp(Blink->Blink, v38->Buffer, v36)
                && (v19
                 || (v44 = v16[1].Flink) == 0LL
                 || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID, struct _LIST_ENTRY *))v44)(
                      v16->Blink,
                      TargetContext,
                      v16[1].Blink)) )
              {
                v45 = v16[4].Flink;
                if ( !v45
                  || !FilterContext
                  || ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *, PVOID))v45)(v16->Blink, FilterContext) )
                {
                  v18 = v58;
LABEL_10:
                  v20 = (__int16)v16[4].Blink;
                  v21 = v20;
                  if ( (v20 & 2) == 0 )
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
                        v23 = v16[3].Flink;
                        if ( v23 != &v16[3] )
                        {
                          p_Blink = &v23[-11].Blink;
                          Flink_high = (unsigned int)v23[1].Flink->Blink;
                        }
                      }
                      if ( v19 )
                      {
                        v24 = 0;
                        v62 = 0;
                        OemString.Length = 0;
                      }
                      else if ( v18 )
                      {
                        v24 = v62;
                      }
                      else
                      {
                        v46 = v20 & 0x10;
                        if ( v46 || (v47 = NormalizedParentName->Buffer, v47 != v11->Buffer) )
                        {
                          if ( Buffer )
                          {
                            v10 = v59;
                          }
                          else
                          {
                            Buffer = v11->Buffer;
                            v59 = v10;
                            LOWORD(v67) = v10;
                            v49 = LOBYTE(v16[9].Flink);
                            if ( TargetNameOffset != v49 )
                            {
                              v10 = TargetNameOffset - v49;
                              v59 = TargetNameOffset - v49;
                              LOWORD(v67) = TargetNameOffset - v49;
                            }
                            WORD1(v67) = v10;
                          }
                          v50 = 0;
                          v51 = 0;
                          if ( v46 )
                          {
                            v55 = Buffer;
                          }
                          else
                          {
                            v52 = 1;
                            v13 = 0LL;
                            v53 = LOBYTE(v16[9].Flink);
                            v54 = v16[8].Blink;
                            if ( (_BYTE)v53 == 1 )
                            {
                              while ( (unsigned int)v13 < LOWORD(v54->Flink) )
                              {
                                if ( *((_BYTE *)&v54->Blink->Flink + (unsigned int)v13) == 92 )
                                  ++v52;
                                v13 = (struct _LIST_ENTRY *)(unsigned int)((_DWORD)v13 + 1);
                              }
                              v55 = Buffer;
                              while ( Buffer[v51] != 92 || (unsigned __int8)++v50 != v52 )
                                ++v51;
                            }
                            else
                            {
                              while ( (unsigned int)v13 < LOWORD(v54->Flink) >> 1 )
                              {
                                if ( *((_WORD *)&v54->Blink->Flink + (unsigned int)v13) == 92 )
                                  ++v52;
                                v13 = (struct _LIST_ENTRY *)(unsigned int)((_DWORD)v13 + 1);
                              }
                              v55 = Buffer;
                              while ( *(_WORD *)&Buffer[2 * v51] != 92 || (unsigned __int8)++v50 != v52 )
                                ++v51;
                              v51 *= v53;
                            }
                            v18 = v58;
                          }
                          v63 = LOBYTE(v16[9].Flink) + v51;
                          OemString.Buffer = &v55[v63];
                          v24 = v10 - v63;
                        }
                        else
                        {
                          v13 = v16[8].Blink->Flink;
                          v48 = LOBYTE(v16[9].Flink);
                          OemString.Buffer = &v47[v48 + (_DWORD)v13];
                          v24 = NormalizedParentName->Length - v48 - (_WORD)v13;
                        }
                        v62 = v24;
                        OemString.Length = v24;
                        OemString.MaximumLength = v24;
                      }
                      v25 = 12;
                      if ( v18 )
                      {
                        v26 = StreamName->Length + 12;
                      }
                      else
                      {
                        if ( !v19 )
                        {
                          if ( LOBYTE(v16[9].Flink) == 1 )
                            v56 = RtlxOemStringToUnicodeSize(&OemString) + 10;
                          else
                            v56 = v24 + 12;
                          v25 = v56 + 2;
                        }
                        if ( v69.Buffer )
                        {
                          LOWORD(v57) = Length;
                        }
                        else
                        {
                          v69.Buffer = &v11->Buffer[TargetNameOffset];
                          LOWORD(v57) = v11->Length - TargetNameOffset;
                          Length = v57;
                          v69.Length = v57;
                          v69.MaximumLength = v57;
                        }
                        if ( LOBYTE(v16[9].Flink) == 1 )
                          v57 = RtlxOemStringToUnicodeSize(&v69) - 2;
                        else
                          v57 = (unsigned __int16)v57;
                        v26 = v57 + v25;
                        if ( StreamName )
                        {
                          if ( LOBYTE(v16[9].Flink) == 2 )
                            v26 += StreamName->Length + 2;
                          else
                            v26 += RtlxOemStringToUnicodeSize(StreamName);
                        }
                      }
                      v27 = (LODWORD(v16[6].Blink) + 3) & 0xFFFFFFFC;
                      v70 = v27;
                      if ( v26 > Flink_high || (v71 = v27 + v26, v27 + v26 > Flink_high) )
                      {
                        LOWORD(v16[4].Blink) |= 2u;
                        v34 = (__int16)v16[4].Blink;
                        v17 = v16;
                      }
                      else
                      {
                        v28 = 0LL;
                        v29 = v16[5].Blink;
                        if ( v29 )
                        {
                          *(_DWORD *)((char *)&v29->Flink + HIDWORD(v16[6].Blink)) = v27 - HIDWORD(v16[6].Blink);
                          HIDWORD(v16[6].Blink) = v27;
                          v28 = (struct _LIST_ENTRY *)((char *)v16[5].Blink + v27);
                        }
                        else
                        {
                          if ( !p_Blink )
                            goto LABEL_26;
                          v30 = p_Blink[3];
                          if ( v30 )
                          {
                            v28 = p_Blink[3];
                            v16[5].Blink = v30;
                          }
                          else
                          {
                            v31 = p_Blink[1];
                            if ( !v31 )
                              goto LABEL_26;
                            if ( (BYTE2(v31->Blink) & 5) != 0 )
                              v28 = v31[1].Blink;
                            else
                              v28 = (struct _LIST_ENTRY *)MmMapLockedPagesSpecifyCache(
                                                            (PMDL)v31,
                                                            0,
                                                            MmCached,
                                                            0LL,
                                                            0,
                                                            0x40000010u);
                            v16[5].Blink = v28;
                          }
                          HIDWORD(v16[6].Flink) = Flink_high;
                        }
LABEL_26:
                        if ( !v16[5].Blink )
                        {
                          PsChargePoolQuota((PEPROCESS)v16[7].Blink, PagedPool, Flink_high);
                          Pool2 = ExAllocatePool2(290LL, Flink_high, 1316115270LL);
                          v16[5].Blink = (struct _LIST_ENTRY *)Pool2;
                          v16[5].Flink = (struct _LIST_ENTRY *)Pool2;
                          HIDWORD(v16[6].Flink) = Flink_high;
                          v28 = v16[5].Blink;
                        }
                        if ( v28 )
                        {
                          Blink_low = LODWORD(v16[6].Blink);
                          if ( v27 > (unsigned int)Blink_low )
                            memset((char *)v16[5].Blink + Blink_low, 0, v27 - (unsigned int)Blink_low);
                          if ( (unsigned __int8)FsRtlNotifyUpdateBuffer(
                                                  (_DWORD)v28,
                                                  Action,
                                                  (unsigned int)&OemString,
                                                  (unsigned int)&v69,
                                                  (__int64)StreamName,
                                                  LOBYTE(v16[9].Flink) == 2,
                                                  v26) )
                            LODWORD(v16[6].Blink) = v27 + v26;
                          else
                            LOWORD(v16[4].Blink) |= 2u;
                        }
                        v17 = v72;
                        v34 = (__int16)v72[4].Blink;
                      }
                      v21 = v34;
                      if ( (v34 & 2) != 0 && v16[5].Blink )
                      {
                        if ( v16[5].Flink )
                        {
                          PsReturnProcessPagedPoolQuota((struct _KPROCESS *)v16[7].Blink, HIDWORD(v16[6].Flink));
                          ExFreePoolWithTag(v16[5].Flink, 0);
                          v21 = (__int16)v77[4].Blink;
                        }
                        v16[5].Blink = 0LL;
                        v16[5].Flink = 0LL;
                        v16[6].Blink = 0LL;
                        HIDWORD(v16[6].Flink) = 0;
                      }
                      v10 = TargetNameOffset;
                      v11 = FullTargetName;
                    }
                    Flink = v64;
                  }
                  if ( Action == 4 )
                  {
                    LOWORD(v17[4].Blink) = v21 | 8;
                  }
                  else
                  {
                    LOWORD(v17[4].Blink) = v21 & 0xFFF7;
                    if ( v16[3].Flink != &v16[3] )
                      FsRtlNotifyCompleteIrpList(v16, 0LL, v13);
                  }
                }
              }
            }
          }
        }
        NotifyList = v79;
      }
    }
    else if ( TargetContext == v16[1].Blink )
    {
      OemString.Buffer = 0LL;
      v62 = 0;
      OemString.Length = 0;
      v18 = 1;
      v58 = 1;
      v19 = 0;
      goto LABEL_10;
    }
    Flink = Flink->Flink;
    v13 = (struct _LIST_ENTRY *)TargetNameOffset;
  }
  v43 = (*((_DWORD *)NotifySync + 16))-- == 1;
  if ( v43 )
  {
    *((_QWORD *)NotifySync + 7) = 0LL;
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)NotifySync);
  }
}
