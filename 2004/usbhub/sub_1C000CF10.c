/*
 * XREFs of sub_1C000CF10 @ 0x1C000CF10
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C00430F0 @ 0x1C00430F0 (sub_1C00430F0.c)
 * Callees:
 *     sub_1C0002310 @ 0x1C0002310 (sub_1C0002310.c)
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C000A080 @ 0x1C000A080 (sub_1C000A080.c)
 *     sub_1C000BBF0 @ 0x1C000BBF0 (sub_1C000BBF0.c)
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C0016B5C @ 0x1C0016B5C (sub_1C0016B5C.c)
 *     sub_1C00171A0 @ 0x1C00171A0 (sub_1C00171A0.c)
 *     sub_1C0018570 @ 0x1C0018570 (sub_1C0018570.c)
 *     sub_1C001C580 @ 0x1C001C580 (sub_1C001C580.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0034AF8 @ 0x1C0034AF8 (sub_1C0034AF8.c)
 *     sub_1C003CF50 @ 0x1C003CF50 (sub_1C003CF50.c)
 *     sub_1C003D000 @ 0x1C003D000 (sub_1C003D000.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

__int64 __fastcall sub_1C000CF10(PDEVICE_OBJECT DeviceObject, __int64 a2, char a3)
{
  __int64 v4; // r15
  __int16 v6; // r9
  unsigned __int16 v7; // r14
  int v8; // r9d
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // r9d
  unsigned __int16 v13; // si
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v15; // rcx
  unsigned __int8 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // rdi
  PVOID v22; // rdx
  __int64 v23; // rcx
  KIRQL v24; // al
  __int64 v25; // rcx
  KIRQL v26; // r12
  PVOID v27; // rdx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r8
  PVOID v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // rdx
  signed int v35; // eax
  __int64 v36; // r8
  PVOID v37; // rdx
  __int64 v38; // rcx
  int v39; // r9d
  int v40; // eax
  char v41; // r9
  unsigned __int8 *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rcx
  KIRQL v45; // si
  PVOID v46; // rdx
  __int64 v47; // rcx
  unsigned __int8 *v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  PVOID v51; // rdx
  __int64 v52; // rcx
  PVOID v53; // rdx
  __int64 v54; // rcx
  unsigned __int8 *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  __int64 v60; // rax
  __int64 v61; // rsi
  signed int v62; // eax
  unsigned int v63; // eax
  unsigned int v64; // edi
  int v65; // ecx
  int v66; // r9d
  unsigned __int16 v67; // di
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rbp
  __int64 v71; // r9
  int v72; // [rsp+64h] [rbp-54h] BYREF
  int v73; // [rsp+68h] [rbp-50h] BYREF
  __int64 v74; // [rsp+70h] [rbp-48h]

  v4 = a2;
  v74 = sub_1C000F050(DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 16, 1668246628, 0, 0LL);
  v7 = 1;
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) != v6 )
    sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 27, (__int64)&unk_1C0062DE8);
  sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061FB8, 0, 0);
  if ( a3 )
  {
    v63 = sub_1C003CF50(DeviceObject);
    v64 = v63;
    if ( (v63 & 0xC0000000) == 0xC0000000 )
    {
      if ( !(unsigned __int8)sub_1C001CEB4(v63) )
        sub_1C004A608((_DWORD)DeviceObject, 0, 54, 0, 0, v65, 0, (__int64)aFdopwrC, 3274, 0);
      sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061FC8, 0, v64);
      return v64;
    }
  }
  sub_1C000F050(DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458174, 0, 0LL);
  v9 = sub_1C0002AF0(DeviceObject, v4, v8 + 10);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458172, 0, v9);
  v10 = sub_1C000BBF0((__int64)DeviceObject);
  v11 = v10;
  if ( (v10 & 0xC0000000) == 0xC0000000 )
  {
    if ( !(unsigned __int8)sub_1C001CEB4(v10) )
      sub_1C004A608((_DWORD)DeviceObject, 0, 53, 0, 0, v11, 0, (__int64)aFdopwrC, 3298, 0);
    sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061FC8, 0, v11);
    return v11;
  }
  sub_1C000FD80((_DWORD)DeviceObject, 8, 2002872692, 100, 0LL);
  sub_1C0018570(v12);
  v13 = 1;
  while ( 1 )
  {
    if ( !DeviceObject )
      sub_1C002DC78(0LL, 0LL);
    DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !DeviceExtension )
LABEL_133:
      sub_1C002DC78(DeviceObject, 0LL);
    if ( *(_DWORD *)DeviceExtension != 541218120 )
      sub_1C002DC78(DeviceObject, DeviceExtension);
    if ( v13 > DeviceExtension[2938] )
      break;
    if ( (dword_1C006B268 & 8) != 0 )
    {
      v15 = *((_QWORD *)DeviceExtension + 111)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v15 = 1413771367;
      *(_QWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 24) = 0LL;
    }
    if ( !v13 )
      goto LABEL_49;
    v16 = (unsigned __int8 *)DeviceObject->DeviceExtension;
    if ( !v16 )
      goto LABEL_133;
    if ( *(_DWORD *)v16 != 541218120 )
      sub_1C002DC78(DeviceObject, v16);
    if ( v13 <= v16[2938] && (v17 = *((_QWORD *)v16 + 382)) != 0 )
    {
      v18 = 2928LL * v13 - 2928;
      v19 = v17 + v18;
      if ( (dword_1C006B268 & 8) != 0 )
      {
        v20 = *((_QWORD *)v16 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
        *(_DWORD *)v20 = 1044672615;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v13;
        *(_QWORD *)(v20 + 24) = v19;
      }
      if ( !v19 )
        goto LABEL_48;
      v21 = 0LL;
      if ( (dword_1C006B268 & 0x100) != 0 )
      {
        v22 = DeviceObject->DeviceExtension;
        if ( v22 )
        {
          v23 = *((_QWORD *)v22 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
          *(_DWORD *)v23 = 1329877100;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = v13;
          *(_QWORD *)(v23 + 24) = 1129270340LL;
        }
      }
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
      v25 = (unsigned int)dword_1C006B268;
      v26 = v24;
      stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
      if ( (dword_1C006B268 & 8) != 0 )
      {
        v27 = DeviceObject->DeviceExtension;
        if ( v27 )
        {
          v25 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v25 = 1413771367;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = v13;
          *(_QWORD *)(v25 + 24) = 0LL;
        }
      }
      v28 = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !v28 )
        goto LABEL_133;
      if ( *(_DWORD *)v28 != 541218120 )
        sub_1C002DC78(DeviceObject, v28);
      if ( v13 <= v28[2938] )
      {
        v29 = *((_QWORD *)v28 + 382);
        if ( v29 )
        {
          v30 = v29 + v18;
          if ( (dword_1C006B268 & 8) != 0 )
          {
            v25 = *((_QWORD *)v28 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
            *(_DWORD *)v25 = 1044672615;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 16) = v13;
            *(_QWORD *)(v25 + 24) = v30;
          }
          if ( v30 )
          {
            v21 = *(_QWORD *)(v30 + 392);
            if ( v21 )
              v21 = sub_1C0002310(v25, v21, 0LL, 1129270340);
          }
        }
      }
      stru_1C006B480.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v26);
      v31 = *(unsigned __int16 *)(v19 + 4);
      if ( (dword_1C006B268 & 0x10) != 0 )
      {
        v32 = DeviceObject->DeviceExtension;
        if ( v32 )
        {
          v33 = *((_QWORD *)v32 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
          *(_DWORD *)v33 = 828664931;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v31;
          *(_QWORD *)(v33 + 24) = v21;
        }
      }
      if ( !v21 )
      {
        v34 = DeviceObject->DeviceExtension;
        v72 = 0;
        v73 = 0;
        if ( !v34 )
          sub_1C002DC78(DeviceObject, 0LL);
        if ( *v34 != 541218120 )
          sub_1C002DC78(DeviceObject, v34);
        v35 = sub_1C000A080((__int64)DeviceObject, *(_WORD *)(v19 + 4), (__int64)&v72, &v73);
        v36 = *(unsigned __int16 *)(v19 + 4);
        v11 = v35;
        if ( (dword_1C006B268 & 0x10) != 0 )
        {
          v37 = DeviceObject->DeviceExtension;
          if ( v37 )
          {
            v38 = *((_QWORD *)v37 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
            *(_DWORD *)v38 = 826500195;
            *(_QWORD *)(v38 + 8) = 0LL;
            *(_QWORD *)(v38 + 16) = v36;
            *(_QWORD *)(v38 + 24) = v35;
          }
        }
        if ( (v35 & 0xC0000000) == 0xC0000000 )
        {
          sub_1C000FD80((_DWORD)DeviceObject, 16, 1667515186, 0, v35);
          if ( (unsigned __int8)sub_1C001CEB4(v11) )
          {
            sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0062068, 0, v11);
            v11 = 0;
          }
          else
          {
            sub_1C004A608(
              (_DWORD)DeviceObject,
              *(unsigned __int16 *)(v19 + 4),
              48,
              v66,
              v66,
              v11,
              v73,
              (__int64)aFdopwrC,
              3004,
              v66);
          }
        }
        else if ( (v72 & 1) != 0 && (v72 & 0x10000) == 0 )
        {
          sub_1C000FD80((_DWORD)DeviceObject, 16, 1667515187, 0, v35);
          sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0062078, *(unsigned __int16 *)(v19 + 4), v11);
          *(_BYTE *)(v19 + 2841) = 1;
        }
        if ( (v11 & 0xC0000000) == 0xC0000000 )
        {
          v4 = a2;
          break;
        }
LABEL_48:
        v4 = a2;
        goto LABEL_49;
      }
      v4 = a2;
      v11 = sub_1C001C580(DeviceObject, a2, v21, v19);
      if ( (v11 & 0xC0000000) == 0xC0000000 )
      {
        sub_1C00171A0(DeviceObject, v21, 0LL, 1129270340LL);
        break;
      }
      sub_1C00171A0(DeviceObject, v21, 0LL, 1129270340LL);
      ++v13;
    }
    else
    {
LABEL_49:
      ++v13;
    }
  }
  sub_1C000F050(DeviceObject);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458174, 0, 0LL);
  v40 = sub_1C0002AF0(DeviceObject, v4, v39 + 8);
  sub_1C000FD80((_DWORD)DeviceObject, 2048, 1346458172, 0, v40);
  if ( *(_BYTE *)(v74 + 5268) == v41 )
    goto LABEL_51;
  v67 = 1;
  while ( 2 )
  {
    if ( v67 > *(unsigned __int8 *)(sub_1C000F050(DeviceObject) + 2938) )
    {
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_51:
          v42 = (unsigned __int8 *)DeviceObject->DeviceExtension;
          if ( !v42 )
            goto LABEL_133;
          if ( *(_DWORD *)v42 != 541218120 )
            sub_1C002DC78(DeviceObject, v42);
          if ( v7 > v42[2938] )
          {
            sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061FC8, 0, v11);
            return v11;
          }
          v43 = 0LL;
          if ( (dword_1C006B268 & 0x100) != 0 )
          {
            v44 = *((_QWORD *)v42 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
            *(_DWORD *)v44 = 1329877100;
            *(_QWORD *)(v44 + 16) = v7;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 24) = 1129071666LL;
          }
          v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels);
          stru_1C006B480.Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)&stru_1C006B480.Dpc.DeferredContext;
          if ( (dword_1C006B268 & 8) != 0 )
          {
            v46 = DeviceObject->DeviceExtension;
            if ( v46 )
            {
              v47 = *((_QWORD *)v46 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
              *(_DWORD *)v47 = 1413771367;
              *(_QWORD *)(v47 + 16) = v7;
              *(_QWORD *)(v47 + 8) = 0LL;
              *(_QWORD *)(v47 + 24) = 0LL;
            }
          }
          if ( v7 )
          {
            v48 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v48 )
              goto LABEL_133;
            if ( *(_DWORD *)v48 != 541218120 )
              sub_1C002DC78(DeviceObject, v48);
            if ( v7 <= v48[2938] )
            {
              v49 = *((_QWORD *)v48 + 382);
              if ( v49 )
              {
                v50 = 2928LL * v7 + v49 - 2928;
                if ( (dword_1C006B268 & 8) != 0 )
                {
                  v49 = *((_QWORD *)v48 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v48 + 220) & *((_DWORD *)v48 + 221));
                  *(_DWORD *)v49 = 1044672615;
                  *(_QWORD *)(v49 + 8) = 0LL;
                  *(_QWORD *)(v49 + 16) = v7;
                  *(_QWORD *)(v49 + 24) = v50;
                }
                if ( v50 )
                {
                  v43 = *(_QWORD *)(v50 + 392);
                  if ( v43 )
                    v43 = sub_1C0002310(v49, v43, 0LL, 1129071666);
                }
              }
            }
          }
          stru_1C006B480.Dpc.DeferredRoutine = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)&stru_1C006B480.Queue.Wcb.NumberOfChannels, v45);
          if ( (dword_1C006B268 & 0x10) != 0 )
          {
            v51 = DeviceObject->DeviceExtension;
            if ( v51 )
            {
              v52 = *((_QWORD *)v51 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
              *(_DWORD *)v52 = 829318514;
              *(_QWORD *)(v52 + 16) = v7;
              *(_QWORD *)(v52 + 8) = 0LL;
              *(_QWORD *)(v52 + 24) = v43;
            }
          }
          if ( v43 )
            break;
          if ( (dword_1C006B268 & 8) != 0 )
          {
            v53 = DeviceObject->DeviceExtension;
            if ( v53 )
            {
              v54 = *((_QWORD *)v53 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v53 + 220) & *((_DWORD *)v53 + 221));
              *(_DWORD *)v54 = 1413771367;
              *(_QWORD *)(v54 + 16) = v7;
              *(_QWORD *)(v54 + 8) = 0LL;
              *(_QWORD *)(v54 + 24) = 0LL;
            }
          }
          if ( v7 )
          {
            v55 = (unsigned __int8 *)DeviceObject->DeviceExtension;
            if ( !v55 )
              goto LABEL_133;
            if ( *(_DWORD *)v55 != 541218120 )
              sub_1C002DC78(DeviceObject, v55);
            if ( v7 > v55[2938] )
            {
              v57 = 0LL;
            }
            else
            {
              v56 = *((_QWORD *)v55 + 382);
              if ( v56 )
              {
                v57 = 2928LL * v7 + v56 - 2928;
                if ( (dword_1C006B268 & 8) != 0 )
                {
                  v58 = *((_QWORD *)v55 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v55 + 220) & *((_DWORD *)v55 + 221));
                  *(_DWORD *)v58 = 1044672615;
                  *(_QWORD *)(v58 + 8) = 0LL;
                  *(_QWORD *)(v58 + 16) = v7;
                  *(_QWORD *)(v58 + 24) = v57;
                }
              }
              else
              {
                v57 = 0LL;
              }
            }
          }
          else
          {
            v57 = 0LL;
          }
          if ( *(_BYTE *)(v57 + 2841) )
          {
            *(_BYTE *)(v57 + 2841) = 0;
            sub_1C0034AF8(DeviceObject, v7, v4, 0LL);
          }
LABEL_85:
          ++v7;
        }
        v60 = sub_1C0011220(v43);
        v61 = v60;
        if ( *(_BYTE *)(v60 + 2740) )
        {
          sub_1C00171A0(DeviceObject, v43, 0LL, 1129071666LL);
          goto LABEL_85;
        }
        if ( (*(_DWORD *)(v60 + 1420) & 0x4000) != 0 )
        {
          sub_1C000FD80((_DWORD)DeviceObject, 16, 1346654803, 0, 0LL);
          sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061FF8, *(unsigned __int16 *)(v61 + 1428), 0);
          v62 = sub_1C00162A8(DeviceObject);
          v11 = v62;
          if ( (v62 & 0xC0000000) == 0xC0000000 )
          {
            sub_1C000FD80((_DWORD)DeviceObject, 16, 1919249970, 0, v62);
            LOBYTE(v71) = 1;
            sub_1C0034AF8(DeviceObject, v7, v4, v71);
            *(_DWORD *)(v61 + 1420) &= ~0x4000u;
            sub_1C004A608((_DWORD)DeviceObject, 0, 88, 0, 0, v11, 0, (__int64)aFdopwrC, 3445, 0);
            v11 = 0;
          }
          else
          {
            *(_DWORD *)(v61 + 1420) &= ~0x4000u;
          }
        }
        sub_1C00171A0(DeviceObject, v43, 0LL, 1129071666LL);
        ++v7;
      }
    }
    v68 = sub_1C0016B5C(DeviceObject, v67, 0LL, 1129071666LL);
    v69 = v68;
    if ( !v68 )
      goto LABEL_122;
    v70 = sub_1C0011220(v68);
    if ( !*(_BYTE *)(v70 + 2740) )
      goto LABEL_121;
    v11 = sub_1C00162A8(DeviceObject);
    if ( (v11 & 0x80000000) == 0 )
    {
      sub_1C003D000(*(_QWORD *)(v4 + 8));
LABEL_121:
      sub_1C00171A0(DeviceObject, v69, 0LL, 1129071666LL);
LABEL_122:
      ++v67;
      continue;
    }
    break;
  }
  sub_1C0034AF8(DeviceObject, v67, v4, 1LL);
  *(_DWORD *)(v70 + 1420) &= ~0x4000u;
  sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061FC8, 0, v11);
  sub_1C00171A0(DeviceObject, v69, 0LL, 1129071666LL);
  return v11;
}
