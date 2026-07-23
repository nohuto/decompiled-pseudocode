/*
 * XREFs of MiTimeSingleLargePageZero @ 0x1403A7C20
 * Callers:
 *     MiZeroPageCalibrate @ 0x1403A7530 (MiZeroPageCalibrate.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402DE3F0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     KeFindFirstSetLeftGroupAffinity @ 0x140350180 (KeFindFirstSetLeftGroupAffinity.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403A7E38 (MiTimeSingleLargePageZeroWorker.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __fastcall MiTimeSingleLargePageZero(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ecx
  unsigned int i; // ebx
  __int64 v4; // rsi
  unsigned int v5; // eax
  _QWORD *Pool; // rax
  _QWORD *v7; // r14
  unsigned __int64 Mask; // r13
  unsigned __int64 v9; // r12
  unsigned int v10; // edi
  unsigned __int8 v11; // r15
  unsigned __int64 v12; // r13
  int FirstSetRightGroupAffinity; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  _QWORD *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  bool v22; // zf
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  unsigned int v25; // [rsp+20h] [rbp-60h]
  unsigned int v26; // [rsp+24h] [rbp-5Ch]
  _GROUP_AFFINITY v27; // [rsp+28h] [rbp-58h] BYREF
  __int64 v28; // [rsp+38h] [rbp-48h]
  _GROUP_AFFINITY Affinity; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  _QWORD *v31; // [rsp+58h] [rbp-28h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+60h] [rbp-20h] BYREF

  v28 = a1;
  v1 = a1;
  v2 = dword_140C4DCE4;
  PreviousAffinity = 0LL;
  v25 = dword_140C4DCE4;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; v1 = v28 )
  {
    v4 = *(_QWORD *)(v1 + 16) + 4544LL * i;
    v30 = v4;
    v5 = *(unsigned __int16 *)(v4 + 4488) / v2;
    v27 = *(_GROUP_AFFINITY *)(v4 + 4472);
    if ( !v5 )
      v5 = 1;
    v26 = v5;
    Pool = MiAllocatePool(64, 8LL * v5, 0x20206D4Du);
    v31 = Pool;
    v7 = Pool;
    if ( Pool )
    {
      Mask = v27.Mask;
      Affinity = 0LL;
      v9 = 0LL;
      *(_QWORD *)(v4 + 4400) = Pool;
      v10 = 0;
      while ( Mask )
      {
        v11 = 0;
        Affinity = 0LL;
        if ( v25 )
        {
          v12 = Affinity.Mask;
          do
          {
            if ( (v10 & 1) != 0 )
              FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity((__int64)&v27);
            else
              FirstSetRightGroupAffinity = KeFindFirstSetLeftGroupAffinity((__int64)&v27);
            v14 = KiProcessorBlock[FirstSetRightGroupAffinity];
            Affinity.Group = *(unsigned __int8 *)(v14 + 208);
            v12 |= 1LL << *(_BYTE *)(v14 + 209);
            v27.Mask &= ~v12;
            if ( !v27.Mask )
              break;
            ++v11;
          }
          while ( v11 < v25 );
          v4 = v30;
          v7 = v31;
          Affinity.Mask = v12;
          Mask = v27.Mask;
        }
        KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
        v15 = MiTimeSingleLargePageZeroWorker(v28, i);
        v9 += v15;
        v7[v10] = v15;
        KeRevertToUserGroupAffinityThread(&PreviousAffinity);
        if ( ++v10 >= 3 )
        {
          v17 = v10 - 3;
          v18 = 0LL;
          v19 = &v7[v17];
          v20 = 3LL;
          do
          {
            v18 += *v19++;
            --v20;
          }
          while ( v20 );
          v21 = v18 / 3;
          v22 = 0;
          if ( (unsigned int)v17 < v10 )
          {
            v23 = &v7[v17];
            do
            {
              if ( *v23 < v21 - v21 / 0xA )
                break;
              if ( *v23 > v21 / 0xA + v21 )
                break;
              LODWORD(v17) = v17 + 1;
              ++v23;
            }
            while ( (unsigned int)v17 < v10 );
            v22 = (_DWORD)v17 == v10;
          }
          if ( v22 )
          {
            dword_140C29FFC += v26 / v25 - v10;
            v9 = v21 * v10;
            break;
          }
        }
        if ( v10 == v26 )
          break;
      }
      v16 = v10;
      v1 = v28;
      *(_QWORD *)(v4 + 4456) = v9 / v16;
    }
    if ( !*(_QWORD *)(v4 + 4400) )
    {
      v27 = *(_GROUP_AFFINITY *)(v4 + 4472);
      KeSetSystemGroupAffinityThread(&v27, &PreviousAffinity);
      v24 = MiTimeSingleLargePageZeroWorker(v1, i);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      *(_QWORD *)(v4 + 4456) = v24;
    }
    ++i;
    v2 = v25;
  }
}
