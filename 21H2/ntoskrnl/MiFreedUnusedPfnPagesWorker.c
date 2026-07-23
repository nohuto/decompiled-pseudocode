/*
 * XREFs of MiFreedUnusedPfnPagesWorker @ 0x1403B98C8
 * Callers:
 *     MiFreeUnusedPfnPagesDpc @ 0x1403B97C0 (MiFreeUnusedPfnPagesDpc.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B9B70 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B9D58 (MiPfnRangeIsZero.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 */

void __fastcall MiFreedUnusedPfnPagesWorker(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  _QWORD *NextNonGapPfnPage; // rdi
  SIZE_T v8; // rsi
  SIZE_T v9; // r14
  unsigned __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rdx
  _QWORD *v13; // rbp
  char *v14; // rbp
  char *v15; // r15
  unsigned __int64 *i; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+18h]
  unsigned __int64 v22; // [rsp+88h] [rbp+20h]

  if ( !*a1 )
    byte_140C50E8C = 1;
  v1 = 0LL;
LABEL_4:
  v2 = 0xFFFFFA8000000000uLL;
LABEL_5:
  if ( v1 != 0x1000000000LL )
  {
    if ( !MmPhysicalMemoryBlock )
    {
LABEL_7:
      v3 = 0x1000000000LL - v1;
      goto LABEL_8;
    }
    for ( i = (unsigned __int64 *)((char *)MmPhysicalMemoryBlock + 16); ; i += 2 )
    {
      if ( i >= (unsigned __int64 *)((char *)MmPhysicalMemoryBlock + 16 * *(unsigned int *)MmPhysicalMemoryBlock + 16) )
      {
        v2 = 0xFFFFFA8000000000uLL;
        goto LABEL_7;
      }
      v17 = *i;
      if ( v1 >= *i )
      {
        v18 = i[1] + v17;
        if ( v1 < v18 )
          v1 = v18;
      }
      else
      {
        v3 = v17 - v1;
        if ( v17 - v1 >= 0x55 )
        {
          v2 = 0xFFFFFA8000000000uLL;
LABEL_8:
          v4 = v1;
          if ( v3 )
          {
            v1 += v3;
            v22 = v1;
            v5 = (((48 * v4 - 0x57FFFFFF001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v20 = v5;
            v6 = (((48 * v1 - 0x58000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v21 = v6;
            if ( v5 < v6 )
            {
              do
              {
                LOBYTE(v2) = 2;
                v19 = (__int64)(v6 - v5) >> 3 << 12;
                NextNonGapPfnPage = (_QWORD *)MiGetNextNonGapPfnPage(&v20, &v19, v2, 1LL);
                if ( !NextNonGapPfnPage )
                  break;
                v8 = v19 & 0xFFFFFFFFFFFFF000uLL;
                if ( (v19 & 0xFFFFFFFFFFFFF000uLL) == 0 )
                  break;
                do
                {
                  if ( *NextNonGapPfnPage || (v9 = RtlCompareMemoryUlong(NextNonGapPfnPage, v8, 0), v9 < 0x1000) )
                  {
                    v9 = 4096LL;
                  }
                  else
                  {
                    v11 = NextNonGapPfnPage;
                    v12 = (__int64)(NextNonGapPfnPage + 0xB000000000LL) / 48;
                    v13 = (_QWORD *)(48 * v12 - 0x58000000000LL);
                    if ( v13 != NextNonGapPfnPage
                      && (!MmIsAddressValidEx(48 * v12 - 0x58000000000LL) || RtlCompareMemoryUlong(v13, 0x30uLL, 0) != 48) )
                    {
                      v11 = NextNonGapPfnPage + 512;
                    }
                    v14 = (char *)NextNonGapPfnPage + (v9 & 0xFFFFFFFFFFFFF000uLL);
                    v15 = (char *)(48 * ((__int64)(v14 + 0x58000000000LL) / 48) - 0x58000000000LL);
                    if ( v15 != v14
                      && (!MmIsAddressValidEx((__int64)(v15 + 48)) || RtlCompareMemoryUlong(v15, 0x30uLL, 0) != 48) )
                    {
                      v14 -= 4096;
                    }
                    MiPfnRangeIsZero(v11, v14);
                  }
                  v10 = (v9 + 4095) & 0xFFFFFFFFFFFFF000uLL;
                  NextNonGapPfnPage = (_QWORD *)((char *)NextNonGapPfnPage + v10);
                  v8 -= v10;
                }
                while ( v8 >= 0x1000 );
                v5 = v20;
                v6 = v21;
                v1 = v22;
              }
              while ( v20 < v21 );
              goto LABEL_4;
            }
            goto LABEL_5;
          }
          return;
        }
        v1 = v17 + i[1];
      }
    }
  }
}
