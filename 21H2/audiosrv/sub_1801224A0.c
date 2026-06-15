/*
 * XREFs of sub_1801224A0 @ 0x1801224A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _o__invalid_parameter_noinfo @ 0x18006AB0E (_o__invalid_parameter_noinfo.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_180119E38 @ 0x180119E38 (sub_180119E38.c)
 *     sub_180122380 @ 0x180122380 (sub_180122380.c)
 */

__int64 __fastcall sub_1801224A0(__int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v9; // esi
  _QWORD *v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  SIZE_T v13; // rbx
  char *v14; // rdx
  __int64 v15; // rcx
  int v16; // r13d
  __int64 v17; // r14
  char *v18; // rcx
  unsigned __int64 v19; // rsi
  __int64 v20; // rcx
  unsigned int v22; // [rsp+30h] [rbp-40h]
  void *Src; // [rsp+38h] [rbp-38h]
  char *v24; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+48h] [rbp-28h] BYREF
  int v26; // [rsp+50h] [rbp-20h]
  int v27; // [rsp+54h] [rbp-1Ch]
  __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  int v29; // [rsp+60h] [rbp-10h]
  int v30; // [rsp+64h] [rbp-Ch]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned int v32; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+58h]

  v33 = a4;
  v25 = 0LL;
  v4 = 0;
  v26 = 0;
  v5 = a4;
  v27 = 0;
  v28 = 0LL;
  v29 = 0;
  v30 = 0;
  if ( a2 && a3 )
  {
    *a2 = 0LL;
    v9 = 0;
    *a3 = 0;
    if ( *(int *)(a1 + 80) > 0 )
    {
      do
      {
        v10 = (_QWORD *)sub_18004B9B4(a1 + 72, v9);
        v11 = (*(__int64 (__fastcall **)(_QWORD, char **, unsigned int *, __int64))(*(_QWORD *)*v10 + 24LL))(
                *v10,
                &v24,
                &v32,
                v5);
        v12 = v11;
        if ( v11 < 0 )
        {
          sub_18004BD84(
            (int)retaddr,
            1098,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            v11);
          goto LABEL_31;
        }
        sub_180119E38((__int64)&v25, &v24);
        sub_180122380((__int64)&v28, &v32);
        v4 += v32;
        ++v9;
        v5 = v33;
      }
      while ( v9 < *(_DWORD *)(a1 + 80) );
      if ( v4 )
      {
        v13 = 16LL * v4;
        v24 = (char *)CoTaskMemAlloc(v13);
        v14 = v24;
        if ( !v24 )
        {
          v12 = -2147024882;
          goto LABEL_31;
        }
        v15 = 0LL;
        v16 = 0;
        v32 = 0;
        if ( v26 > 0 )
        {
          v17 = 0LL;
          while ( 1 )
          {
            if ( v17 < 0 )
            {
              sub_1800BB2C8(0xC000008C);
              __debugbreak();
            }
            Src = *(void **)(v25 + 8 * v17);
            if ( v16 >= v29 )
            {
              sub_1800BB2C8(0xC000008C);
              __debugbreak();
            }
            v18 = &v14[16 * v15];
            v22 = *(_DWORD *)(v28 + 4 * v17);
            v19 = 16LL * v22;
            if ( v19 )
            {
              if ( !v18 )
                goto LABEL_15;
              if ( Src && v13 >= v19 )
              {
                memcpy(v18, Src, 16LL * v22);
                goto LABEL_23;
              }
              memset(v18, 0, v13);
              if ( Src )
              {
                if ( v13 >= v19 )
                  goto LABEL_23;
                *(_DWORD *)o__errno(v18) = 34;
              }
              else
              {
LABEL_15:
                *(_DWORD *)o__errno(v18) = 22;
              }
              o__invalid_parameter_noinfo(v20);
            }
LABEL_23:
            v13 -= v19;
            v32 += v22;
            CoTaskMemFree(Src);
            v14 = v24;
            ++v16;
            ++v17;
            if ( v16 >= v26 )
              break;
            v15 = v32;
          }
        }
        *a2 = v14;
        *a3 = v4;
      }
    }
    v12 = 0;
  }
  else
  {
    v12 = -2147467261;
  }
LABEL_31:
  if ( v28 )
    _o_free(v28);
  if ( v25 )
    _o_free(v25);
  return v12;
}
