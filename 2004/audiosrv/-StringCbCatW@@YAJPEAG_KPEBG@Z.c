/*
 * XREFs of ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1800DE250
 * Callers:
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x1800DBE34 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18013398C (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     StringLengthWorkerW_1 @ 0x180066B10 (StringLengthWorkerW_1.c)
 */

__int64 __fastcall StringCbCatW(STRSAFE_PCNZWCH psz, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // r11
  signed int v5; // r9d
  HRESULT v7; // eax
  size_t v8; // r8
  wchar_t *v9; // rdx
  size_t v10; // rcx
  __int64 v11; // r9
  char *v12; // rbx
  wchar_t v13; // ax
  wchar_t *v14; // rax
  size_t pcchLength; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2 >> 1;
  v5 = 0;
  if ( (a2 >> 1) - 1 > 0x7FFFFFFE )
    v5 = -2147024809;
  if ( v5 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    v7 = StringLengthWorkerW_1(psz, a2 >> 1, &pcchLength);
    v8 = pcchLength;
    v5 = v7;
  }
  if ( v5 >= 0 )
  {
    v9 = (wchar_t *)&psz[v8];
    v10 = v3 - v8;
    if ( v3 != v8 )
    {
      v11 = 2147483646LL;
      v12 = (char *)(a3 - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(wchar_t *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    v5 = v10 == 0 ? 0x8007007A : 0;
    *v14 = 0;
  }
  return (unsigned int)v5;
}
