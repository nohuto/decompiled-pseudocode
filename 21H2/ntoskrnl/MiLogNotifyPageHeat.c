/*
 * XREFs of MiLogNotifyPageHeat @ 0x14055F8B8
 * Callers:
 *     MiNotifyPageHeat @ 0x140560004 (MiNotifyPageHeat.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1402514DC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiLogNotifyPageHeat(_DWORD *a1)
{
  _DWORD *v1; // r11
  __int64 v2; // rdx
  bool v3; // zf
  char v4; // al
  unsigned __int64 *v5; // r14
  __int64 v6; // rsi
  _QWORD *v7; // rcx
  unsigned __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  unsigned __int64 v15; // rcx
  int *v16; // rdx
  struct _EVENT_DATA_DESCRIPTOR *v17; // rax
  __int64 v18; // r11
  unsigned __int64 v19; // rcx
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v22; // r8
  int v23; // eax
  unsigned __int16 v24; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int16 v25; // [rsp+44h] [rbp-184h] BYREF
  int v26; // [rsp+48h] [rbp-180h] BYREF
  int v27; // [rsp+4Ch] [rbp-17Ch] BYREF
  int v28; // [rsp+50h] [rbp-178h] BYREF
  int v29; // [rsp+54h] [rbp-174h] BYREF
  int v30; // [rsp+58h] [rbp-170h] BYREF
  int v31; // [rsp+5Ch] [rbp-16Ch] BYREF
  __int64 v32; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-160h] BYREF
  __int64 v34; // [rsp+70h] [rbp-158h] BYREF
  unsigned __int64 v35; // [rsp+78h] [rbp-150h] BYREF
  __int64 v36[17]; // [rsp+80h] [rbp-148h] BYREF
  int v37; // [rsp+108h] [rbp-C0h]
  int v38; // [rsp+10Ch] [rbp-BCh]
  char v39; // [rsp+110h] [rbp-B8h] BYREF
  int *v40; // [rsp+130h] [rbp-98h]
  __int64 v41; // [rsp+138h] [rbp-90h]
  __int64 *v42; // [rsp+140h] [rbp-88h]
  __int64 v43; // [rsp+148h] [rbp-80h]
  unsigned __int64 *v44; // [rsp+150h] [rbp-78h]
  __int64 v45; // [rsp+158h] [rbp-70h]
  int *v46; // [rsp+160h] [rbp-68h]
  __int64 v47; // [rsp+168h] [rbp-60h]
  int *v48; // [rsp+170h] [rbp-58h]
  __int64 v49; // [rsp+178h] [rbp-50h]
  unsigned __int16 *v50; // [rsp+180h] [rbp-48h]
  __int64 v51; // [rsp+188h] [rbp-40h]
  unsigned __int64 *v52; // [rsp+190h] [rbp-38h]
  int v53; // [rsp+198h] [rbp-30h]
  int v54; // [rsp+19Ch] [rbp-2Ch]

  v1 = a1;
  if ( *(_QWORD *)&qword_140C4EF20 )
  {
    v2 = 64LL;
    if ( !**(_DWORD **)&qword_140C4EF20 || (v3 = tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 64LL) == 0, v4 = 1, v3) )
      v4 = 0;
    if ( v4 )
    {
      v5 = (unsigned __int64 *)(v1 + 4);
      v6 = 0LL;
      v7 = v1 + 4;
      v8 = (unsigned __int64)&v1[2 * v1[1] + 4];
      if ( (unsigned __int64)(v1 + 4) < v8 )
      {
        do
        {
          v9 = (*v7 & 0x3FFLL) + 1;
          v10 = (*v7 >> 10) & 3LL;
          if ( ((*v7 >> 10) & 3) != 0 )
          {
            do
            {
              v9 <<= 9;
              LODWORD(v10) = v10 - 1;
            }
            while ( (_DWORD)v10 );
          }
          v6 += v9;
          ++v7;
        }
        while ( (unsigned __int64)v7 < v8 );
        v2 = 64LL;
      }
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
      }
      if ( *v1 )
      {
        if ( **(_DWORD **)&qword_140C4EF20 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C4EF20, v2) )
          goto LABEL_23;
        v19 = *v5;
        v16 = (int *)&word_140026DFE;
        v29 = *(_DWORD *)(v18 + 4);
        v40 = &v29;
        v42 = &v34;
        v35 = v19 >> 12;
        v44 = &v35;
        v41 = 4LL;
        v30 = (v19 & 0x3FF) + 1;
        v31 = (v19 >> 10) & 3;
        v46 = &v30;
        v34 = v6;
        v48 = &v31;
        v25 = *(_WORD *)(v18 + 4);
        v53 = 8 * v25;
        v17 = (struct _EVENT_DATA_DESCRIPTOR *)&v39;
        v43 = 8LL;
        v45 = 8LL;
        v47 = 4LL;
        v49 = 4LL;
        v50 = &v25;
        v51 = 2LL;
        v52 = v5;
        v54 = 0;
      }
      else
      {
        if ( **(_DWORD **)&qword_140C4EF20 <= 5u || !tlgKeywordOn(*(__int64 *)&qword_140C4EF20, v2) )
          goto LABEL_23;
        v15 = *v5;
        v16 = &dword_140026E84;
        v26 = *(_DWORD *)(v14 + 4);
        v36[4] = (__int64)&v26;
        v36[6] = (__int64)&v32;
        v33 = v15 >> 12;
        v36[8] = (__int64)&v33;
        v36[5] = 4LL;
        v27 = (v15 & 0x3FF) + 1;
        v28 = (v15 >> 10) & 3;
        v36[10] = (__int64)&v27;
        v32 = v6;
        v36[12] = (__int64)&v28;
        v24 = *(_WORD *)(v14 + 4);
        v37 = 8 * v24;
        v17 = (struct _EVENT_DATA_DESCRIPTOR *)v36;
        v36[7] = 8LL;
        v36[9] = 8LL;
        v36[11] = 4LL;
        v36[13] = 4LL;
        v36[14] = (__int64)&v24;
        v36[15] = 2LL;
        v36[16] = (__int64)v5;
        v38 = 0;
      }
      tlgWriteEx_EtwWriteEx(v13, (unsigned __int8 *)v16, 0LL, 1u, 0, 0, 9u, v17);
LABEL_23:
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v20 = KeGetCurrentIrql();
          if ( v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v3 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v3 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
