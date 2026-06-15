/*
 * XREFs of ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x140046340
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     memcmp_0 @ 0x14001F433 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioMediaType::IsEqual(struct IAudioMediaType *this, struct IAudioMediaType *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  struct IAudioMediaTypeVtbl *lpVtbl; // rdx
  __int64 v8; // r9
  unsigned __int16 v9; // r12
  unsigned __int16 Release; // r13
  HRESULT (__stdcall *QueryInterface)(IAudioMediaType *, const IID *const, void **); // rcx
  __int16 v12; // r11
  int v13; // r10d
  __int16 v14; // si
  __int16 v15; // ax
  __int16 v16; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  unsigned __int64 v19; // rcx
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  struct IAudioMediaTypeVtbl *v23; // r10
  __int128 v25; // [rsp+20h] [rbp-40h]
  __int128 v26; // [rsp+38h] [rbp-28h]

  v3 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    if ( this == a2 )
    {
      *a3 = 14;
      return v3;
    }
    v6 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a2->lpVtbl->GetAudioFormat)(a2);
    lpVtbl = this[2].lpVtbl;
    v8 = v6;
    if ( !v6 )
    {
      if ( lpVtbl )
        return 1;
      else
        *a3 |= 0xEu;
      return v3;
    }
    if ( lpVtbl )
    {
      v9 = *(_WORD *)(v6 + 16);
      Release = (unsigned __int16)lpVtbl->Release;
      v26 = *(_OWORD *)v6;
      QueryInterface = lpVtbl->QueryInterface;
      v25 = *(_OWORD *)&lpVtbl->QueryInterface;
      if ( WORD1(*(_OWORD *)&lpVtbl->QueryInterface) )
      {
        v12 = WORD1(*(_OWORD *)v6);
      }
      else
      {
        v12 = 0;
        WORD1(v26) = 0;
        DWORD2(v26) = 0;
        WORD6(v26) = 0;
      }
      if ( (unsigned __int64)lpVtbl->QueryInterface >> 32 )
      {
        v13 = HIDWORD(*(_QWORD *)v6);
      }
      else
      {
        v13 = 0;
        *(_QWORD *)((char *)&v26 + 4) = 0LL;
      }
      if ( HIWORD(v25) )
      {
        v14 = HIWORD(*(_OWORD *)v6);
      }
      else
      {
        v14 = 0;
        HIDWORD(v26) = 0;
      }
      v15 = *(_OWORD *)&lpVtbl->QueryInterface;
      if ( (_WORD)v25 )
      {
        v16 = v26;
      }
      else
      {
        v16 = 0;
        LOWORD(v26) = 0;
      }
      if ( !v12 )
      {
        WORD1(v25) = 0;
        QueryInterface = (HRESULT (__stdcall *)(IAudioMediaType *, const IID *const, void **))v25;
        DWORD2(v25) = 0;
        WORD6(v25) = 0;
      }
      if ( !v13 )
      {
        *(_QWORD *)((char *)&v25 + 4) = 0LL;
        QueryInterface = (HRESULT (__stdcall *)(IAudioMediaType *, const IID *const, void **))(unsigned int)v25;
      }
      if ( !v14 )
        HIDWORD(v25) = 0;
      if ( !v16 )
      {
        LOWORD(v25) = 0;
        v15 = 0;
        QueryInterface = (HRESULT (__stdcall *)(IAudioMediaType *, const IID *const, void **))v25;
      }
      if ( v16 == 1 )
        v9 = 0;
      if ( v15 == 1 )
        Release = 0;
      if ( v16 != v15 )
        return 1;
      if ( LOWORD(lpVtbl->QueryInterface) == 0xFFFE )
      {
        v17 = *(_QWORD *)(v8 + 24) - (unsigned __int64)lpVtbl->IsCompressedFormat;
        if ( !v17 )
          v17 = *(_QWORD *)(v8 + 32) - (unsigned __int64)lpVtbl->IsEqual;
        if ( v17 )
          return 1;
      }
      if ( v9 != Release )
        return 1;
      v18 = *a3 | 2;
      *a3 = v18;
      v19 = (unsigned __int64)QueryInterface - v26;
      if ( !v19 )
      {
        v19 = *((_QWORD *)&v25 + 1) - *((_QWORD *)&v26 + 1);
        if ( *((_QWORD *)&v25 + 1) == *((_QWORD *)&v26 + 1) )
          v19 = Release - (unsigned __int64)v9;
      }
      if ( v19 )
        return 1;
      v20 = v18 | 4;
      v21 = 18;
      *a3 = v20;
      v22 = 18;
      v23 = this[2].lpVtbl;
      if ( LOWORD(v23->QueryInterface) != 1 )
        v22 = LOWORD(v23->Release) + 18;
      if ( *(_WORD *)v8 != 1 )
        v21 = *(unsigned __int16 *)(v8 + 16) + 18;
      if ( v22 != v21 )
        return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
      if ( memcmp_0((char *)&v23->Release + 2, (const void *)(v8 + 18), *(unsigned __int16 *)(v8 + 16)) )
        return 1;
      *a3 = v20 | 8;
    }
    return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
  }
  return 2147942487LL;
}
