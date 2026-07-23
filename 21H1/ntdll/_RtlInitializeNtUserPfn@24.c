/*
 * XREFs of _RtlInitializeNtUserPfn@24 @ 0x4B2F4850
 * Callers:
 *     <none>
 * Callees:
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlInitializeNtUserPfn(
        void *Src,
        unsigned int Size,
        const void *Size_4,
        unsigned int a4,
        const void *a5,
        unsigned int a6)
{
  int v6; // esi
  int result; // eax
  size_t v8; // [esp-1Ch] [ebp-30h]
  size_t v9; // [esp-10h] [ebp-24h]
  size_t v10; // [esp-4h] [ebp-18h]
  __int64 v11; // [esp+8h] [ebp-Ch]
  int v12; // [esp+10h] [ebp-4h]

  HIDWORD(v11) = HIDWORD(qword_4B3A9300);
  v12 = qword_4B3A9300;
  v6 = 0;
  LODWORD(v11) = *(_DWORD *)__guard_check_icall_fptr;
  if ( !LdrParentRtlInitializeNtUserPfn
    || (result = LdrParentRtlInitializeNtUserPfn(LdrParentRtlInitializeNtUserPfn, Src, Size, Size_4, a4, a5, a6),
        v6 = result,
        result >= 0) )
  {
    if ( byte_4B3A91D8 || (Size & 7) != 0 || Size > 0xC0 || (a4 & 7) != 0 || a4 > 0xC0 || (a6 & 7) != 0 || a6 > 0x58 )
    {
      return -1073741811;
    }
    else
    {
      LdrProtectMrdata(0);
      LODWORD(v10) = Size;
      memcpy(&NtUserPfn, Src, v10);
      LODWORD(v9) = a4;
      memcpy(&off_4B3A90C0, Size_4, v9);
      LODWORD(v8) = a6;
      memcpy(&off_4B3A9180, a5, v8);
      byte_4B3A91D8 = 1;
      LdrProtectMrdata(1);
      if ( v12 != (_DWORD)qword_4B3A9300
        || v11 != __PAIR64__(HIDWORD(qword_4B3A9300), *(_DWORD *)__guard_check_icall_fptr) )
      {
        __fastfail(0x13u);
      }
      return v6;
    }
  }
  return result;
}
