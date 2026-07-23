/*
 * XREFs of CmpQueryKeyValueData @ 0x1406E7610
 * Callers:
 *     CmEnumerateValueKey @ 0x1406E4650 (CmEnumerateValueKey.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C3C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F570 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpCopyCompressedName @ 0x14065ED94 (CmpCopyCompressedName.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQueryKeyValueData(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        _DWORD *Size,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v9; // r11
  unsigned int v10; // r13d
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  unsigned __int16 v13; // dx
  unsigned int v14; // edx
  unsigned int v15; // ecx
  unsigned int v16; // r14d
  unsigned int v17; // esi
  int v19; // r9d
  unsigned int v20; // r10d
  unsigned int v21; // r15d
  unsigned int v22; // r9d
  unsigned int v23; // edx
  unsigned int v24; // r12d
  size_t v25; // r8
  unsigned int v26; // r8d
  unsigned int i; // eax
  unsigned int v28; // r13d
  _WORD *v29; // rcx
  int v30; // r9d
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // r13d
  unsigned int v34; // esi
  void *Src; // [rsp+48h] [rbp-60h] BYREF
  _DWORD v36[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v37; // [rsp+58h] [rbp-50h]
  __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned int v41; // [rsp+C0h] [rbp+18h]
  char v42; // [rsp+C8h] [rbp+20h] BYREF

  v9 = a1;
  v10 = a6;
  v11 = 0;
  Src = 0LL;
  v42 = 0;
  v36[0] = -1;
  v36[1] = 0;
  v38 = *(_QWORD *)(a1 + 32);
  v12 = Size;
  v37 = a3;
  v13 = 2 * *(_WORD *)(a3 + 2);
  if ( (*(_BYTE *)(a3 + 16) & 1) == 0 )
    v13 = *(_WORD *)(a3 + 2);
  if ( a4 == 2 )
  {
    v14 = *(_DWORD *)(a3 + 4);
    v15 = v14 + 0x80000000;
    if ( v14 < 0x80000000 )
      v15 = *(_DWORD *)(a3 + 4);
    LODWORD(Size) = v15;
    v16 = 0;
    *a7 = v15 + 12;
    if ( v10 < 0xC )
    {
      v16 = -1073741789;
    }
    else
    {
      *v12 = 0;
      v12[1] = *(_DWORD *)(a3 + 12);
      v12[2] = v15;
      v17 = v10 - 12;
      if ( v10 - 12 < v15 )
        v16 = -2147483643;
      if ( v17 >= v15 )
        v17 = v15;
      if ( v15 )
      {
        if ( v14 >= 0x80000000 )
        {
          Src = (void *)(a3 + 8);
        }
        else if ( !(unsigned __int8)CmpGetValueData(
                                      *(_QWORD *)(v9 + 32),
                                      a2,
                                      a3,
                                      (unsigned int)&Size,
                                      (__int64)&Src,
                                      (__int64)&v42,
                                      (__int64)v36) )
        {
          v16 = -1073741670;
        }
        if ( Src )
          memmove(v12 + 3, Src, v17);
      }
    }
  }
  else if ( a4 )
  {
    v19 = a4 - 1;
    if ( v19 && (v30 = v19 - 2) != 0 )
    {
      if ( v30 == 1 )
      {
        v31 = *(_DWORD *)(a3 + 4);
        v32 = v31 + 0x80000000;
        if ( v31 < 0x80000000 )
          v32 = *(_DWORD *)(a3 + 4);
        LODWORD(Size) = v32;
        v16 = 0;
        *a7 = v32 + 8;
        if ( v10 < 8 )
        {
          v16 = -1073741789;
        }
        else
        {
          *v12 = *(_DWORD *)(a3 + 12);
          v12[1] = v32;
          v33 = v10 - 8;
          v34 = v32;
          if ( v33 < v32 )
          {
            v34 = v33;
            v16 = -2147483643;
          }
          if ( v32 )
          {
            if ( v31 < 0x80000000 )
            {
              if ( !(unsigned __int8)CmpGetValueData(
                                       *(_QWORD *)(v9 + 32),
                                       a2,
                                       a3,
                                       (unsigned int)&Size,
                                       (__int64)&Src,
                                       (__int64)&v42,
                                       (__int64)v36) )
                v16 = -1073741670;
            }
            else
            {
              Src = (void *)(a3 + 8);
            }
            if ( Src )
              memmove(v12 + 2, Src, v34);
          }
        }
      }
      else
      {
        v16 = -1073741811;
      }
    }
    else
    {
      v20 = *(_DWORD *)(a3 + 4);
      v41 = v20;
      if ( v20 >= 0x80000000 )
        v21 = v20 + 0x80000000;
      else
        v21 = *(_DWORD *)(a3 + 4);
      LODWORD(Size) = v21;
      v22 = v13;
      v23 = v21 + v13 + 20;
      v24 = 0;
      if ( v21 )
      {
        v24 = (v23 - v21 + 7) & 0xFFFFFFF8;
        if ( v24 > v23 - v21 )
          v23 = v24 + v21;
      }
      v16 = 0;
      *a7 = v23;
      if ( v10 < 0x14 )
      {
        v16 = -1073741789;
      }
      else
      {
        *v12 = 0;
        v12[1] = *(_DWORD *)(a3 + 12);
        v12[3] = v21;
        v12[4] = v22;
        v25 = v10 - 20;
        if ( (unsigned int)v25 >= v22 )
          v25 = v22;
        else
          v16 = -2147483643;
        if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        {
          v26 = (unsigned int)v25 >> 1;
          if ( v26 >= *(unsigned __int16 *)(a3 + 2) )
            v26 = *(unsigned __int16 *)(a3 + 2);
          for ( i = 0; i < v26; ++i )
            *((_WORD *)v12 + i + 10) = *(unsigned __int8 *)(i + a3 + 20);
        }
        else
        {
          memmove(v12 + 5, (const void *)(a3 + 20), v25);
          v20 = v41;
          v9 = a1;
        }
        if ( v21 )
        {
          if ( v20 >= 0x80000000 )
          {
            Src = (void *)(a3 + 8);
          }
          else
          {
            if ( !(unsigned __int8)CmpGetValueData(
                                     *(_QWORD *)(v9 + 32),
                                     a2,
                                     a3,
                                     (unsigned int)&Size,
                                     (__int64)&Src,
                                     (__int64)&v42,
                                     (__int64)v36) )
              v16 = -1073741670;
            v21 = (unsigned int)Size;
          }
          v12[2] = v24;
          if ( v10 >= v24 )
            v11 = v10 - v24;
          if ( v11 >= v21 )
            v11 = v21;
          else
            v16 = -2147483643;
          if ( Src )
            memmove((char *)v12 + v24, Src, v11);
        }
        else
        {
          v12[2] = -1;
        }
      }
    }
  }
  else
  {
    v16 = 0;
    *a7 = v13 + 12;
    if ( v10 < 0xC )
    {
      v16 = -1073741789;
    }
    else
    {
      *v12 = 0;
      v12[1] = *(_DWORD *)(a3 + 12);
      v12[2] = v13;
      v28 = v10 - 12;
      if ( v28 >= v13 )
        v28 = v13;
      else
        v16 = -2147483643;
      v29 = v12 + 3;
      if ( (*(_BYTE *)(a3 + 16) & 1) != 0 )
        CmpCopyCompressedName(v29, v28, (unsigned __int8 *)(a3 + 20), *(unsigned __int16 *)(a3 + 2));
      else
        memmove(v29, (const void *)(a3 + 20), v28);
    }
  }
  if ( Src && Src != (void *)(a3 + 8) )
  {
    if ( v42 == 1 )
      ExFreePoolWithTag(Src, 0);
    else
      (*(void (__fastcall **)(__int64, _DWORD *))(v38 + 16))(v38, v36);
  }
  return v16;
}
