/*
 * XREFs of ?GetInstanceId@@YGJU_UNICODE_STRING@@PAPAG1@Z @ 0x13E1F9
 * Callers:
 *     ?GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z @ 0x13E265 (-GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __userpurge GetInstanceId@<eax>(
        wchar_t **a1@<edx>,
        wchar_t **a2@<ecx>,
        struct _UNICODE_STRING a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  int v6; // edi
  wchar_t *v7; // eax
  wchar_t *v8; // eax
  wchar_t *v9; // eax

  v6 = -1073741668;
  if ( a3.Buffer )
  {
    if ( a2 )
    {
      if ( a1 )
      {
        v7 = _wcschr(a3.Buffer, 0x23u);
        *a2 = v7;
        if ( v7 )
        {
          *a2 = v7 + 1;
          v8 = _wcschr(v7 + 1, 0x23u);
          *a2 = v8;
          if ( v8 )
          {
            *a2 = v8 + 1;
            v9 = _wcschr(v8 + 1, 0x23u);
            *a1 = v9;
            return v9 == 0 ? 0xC000009C : 0;
          }
        }
      }
    }
  }
  return v6;
}
