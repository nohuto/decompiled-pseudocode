/*
 * XREFs of ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801A1000
 * Callers:
 *     ?Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z @ 0x1801A140C (-Create@CWARPDrawListEntry@@SAJAEBUWARPDrawListEntryParams@@PEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801A1220 (--4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z @ 0x1801A3214 (--0CDrawListEntry@@IEAA@AEBUDrawListEntryParams@@@Z.c)
 */

CWARPDrawListEntry *__fastcall CWARPDrawListEntry::CWARPDrawListEntry(
        CWARPDrawListEntry *this,
        const struct WARPDrawListEntryParams *a2)
{
  const __m128i *v4; // rax
  __m128 v5; // xmm2
  float *v6; // rdx
  __int64 v7; // rax
  char *v8; // r8
  char *v9; // r9
  float v10; // xmm0_4
  float v12[3]; // [rsp+20h] [rbp-28h] BYREF
  float v13; // [rsp+2Ch] [rbp-1Ch]

  *((_DWORD *)this + 2) = 0;
  CDrawListEntry::CDrawListEntry((CWARPDrawListEntry *)((char *)this + 16), a2);
  *(_QWORD *)this = &CWARPDrawListEntry::`vftable';
  *((_QWORD *)this + 2) = &CWARPDrawListEntry::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 4) = &CWARPDrawListEntry::`vftable'{for `CBaseDrawListEntry'};
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 14);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 15);
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *(_QWORD *)((char *)this + 268) = 0LL;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *((_BYTE *)this + 280) = 0;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 372) = 0LL;
  *((_DWORD *)this + 95) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_BYTE *)this + 384) = 0;
  *((_BYTE *)this + 448) = *((_BYTE *)a2 + 288);
  *((_BYTE *)this + 449) = *((_BYTE *)a2 + 289);
  *(_OWORD *)((char *)this + 200) = *(_OWORD *)((char *)a2 + 40);
  *((_OWORD *)this + 14) = *((_OWORD *)a2 + 4);
  v4 = (const __m128i *)*((_QWORD *)a2 + 2);
  if ( v4 )
  {
    v5 = (__m128)_mm_loadu_si128(v4 + 7);
    v6 = (float *)*((_QWORD *)a2 + 3);
    v7 = 4LL;
    v8 = (char *)(this - (CWARPDrawListEntry *)v6);
    v9 = (char *)((char *)v12 - (char *)v6);
    v13 = _mm_shuffle_ps(v5, v5, 255).m128_f32[0];
    v12[0] = v13 * v5.m128_f32[0];
    v12[2] = _mm_shuffle_ps(v5, v5, 170).m128_f32[0] * v13;
    v12[1] = _mm_shuffle_ps(v5, v5, 85).m128_f32[0] * v13;
    do
    {
      v10 = *(float *)((char *)v6 + (_QWORD)v9) * *v6;
      *(float *)((char *)++v6 + (_QWORD)v8 + 220) = v10;
      --v7;
    }
    while ( v7 );
  }
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 240, (char *)a2 + 80);
  WARPDrawListEntryBitmapDesc::operator=((char *)this + 344, (char *)a2 + 184);
  return this;
}
