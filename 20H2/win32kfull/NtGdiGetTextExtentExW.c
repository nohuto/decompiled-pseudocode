/*
 * XREFs of NtGdiGetTextExtentExW @ 0x1C00A5920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtGdiGetTextExtentExW(
        HDC a1,
        const void *a2,
        unsigned int a3,
        int a4,
        _DWORD *a5,
        void *a6,
        _QWORD *a7,
        int a8)
{
  __int64 v8; // rbx
  HDC v10; // r10
  void *v11; // rax
  unsigned int v12; // r12d
  unsigned __int16 *v13; // r13
  _BYTE *v14; // r15
  int v15; // esi
  unsigned int TextExtent; // edi
  ULONG64 v17; // rax
  _QWORD *v18; // r14
  int *v19; // r8
  _DWORD *v20; // rdx
  void *v21; // rcx
  size_t v22; // r8
  __int64 v24; // [rsp+48h] [rbp-110h] BYREF
  _BYTE *v25; // [rsp+50h] [rbp-108h]
  int v26; // [rsp+58h] [rbp-100h]
  unsigned int v27; // [rsp+60h] [rbp-F8h]
  int v28; // [rsp+68h] [rbp-F0h]
  unsigned __int16 *v29; // [rsp+70h] [rbp-E8h]
  _QWORD *v30; // [rsp+78h] [rbp-E0h]
  void *v31; // [rsp+80h] [rbp-D8h]
  __int64 v32; // [rsp+88h] [rbp-D0h] BYREF
  HDC v33; // [rsp+90h] [rbp-C8h]
  void *v34; // [rsp+98h] [rbp-C0h]
  _QWORD *v35; // [rsp+A0h] [rbp-B8h]
  HDC v36; // [rsp+A8h] [rbp-B0h]
  _BYTE Src[64]; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned __int16 v38[16]; // [rsp+F0h] [rbp-68h] BYREF

  v26 = a4;
  v8 = a3;
  v10 = a1;
  v33 = a1;
  v28 = a4;
  v36 = a1;
  v27 = a3;
  v11 = a6;
  v31 = a6;
  v34 = a6;
  v30 = a7;
  v35 = a7;
  v32 = 0LL;
  v12 = 0;
  LODWORD(v24) = 0;
  v13 = 0LL;
  v29 = 0LL;
  v14 = 0LL;
  v25 = 0LL;
  v15 = 0;
  TextExtent = 0;
  if ( !a7 )
    return TextExtent;
  if ( a3 )
  {
    LOBYTE(v15) = a3 <= 0x10;
    if ( a2 )
    {
      if ( a3 > 0x10 )
      {
        if ( a3 <= 0x682AAA )
        {
          v14 = (_BYTE *)AllocFreeTmpBuffer(6 * a3);
          v25 = v14;
        }
        v13 = (unsigned __int16 *)&v14[4 * v8];
        v29 = v13;
      }
      else
      {
        v13 = v38;
        v29 = v38;
        v14 = Src;
        v25 = Src;
      }
      if ( v14 )
      {
        v17 = (ULONG64)a2 + 2 * v8;
        if ( v17 < (unsigned __int64)a2 || v17 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v13, a2, 2 * v8);
        TextExtent = 1;
      }
      v11 = v31;
      v18 = v30;
      v10 = v33;
    }
    else
    {
      v18 = a7;
    }
    if ( TextExtent )
    {
      v19 = 0LL;
      if ( v11 )
        v19 = (int *)v14;
      TextExtent = GreGetTextExtentExW(v10, v13, v8, (__int64)&v24, v19, (__int64)&v32, a8);
      v12 = v24;
    }
    v20 = a5;
    if ( !TextExtent )
      goto LABEL_35;
  }
  else
  {
    TextExtent = 1;
    v20 = a5;
    v18 = a7;
  }
  if ( v12 > (unsigned int)v8 )
  {
    TextExtent = 0;
  }
  else
  {
    if ( (unsigned __int64)v18 >= MmUserProbeAddress )
      v18 = (_QWORD *)MmUserProbeAddress;
    *v18 = v32;
    if ( v20 )
    {
      if ( (unsigned __int64)v20 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v12;
    }
    if ( v12 )
    {
      v21 = v31;
      if ( v31 )
      {
        if ( v14 )
        {
          v22 = 4LL * v12;
          if ( (unsigned __int64)v31 + v22 > MmUserProbeAddress
            || (char *)v31 + v22 <= v31
            || ((unsigned __int8)v31 & 3) != 0 )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          memmove(v21, v14, v22);
        }
      }
    }
  }
LABEL_35:
  if ( !v15 && v14 )
    FreeTmpBuffer(v14);
  return TextExtent;
}
