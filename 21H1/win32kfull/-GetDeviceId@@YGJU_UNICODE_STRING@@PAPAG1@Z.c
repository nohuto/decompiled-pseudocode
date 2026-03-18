/*
 * XREFs of ?GetDeviceId@@YGJU_UNICODE_STRING@@PAPAG1@Z @ 0x13E1A4
 * Callers:
 *     ?GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z @ 0x13E265 (-GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z.c)
 *     ?ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z @ 0x13E409 (-ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __userpurge GetDeviceId@<eax>(
        wchar_t **a1@<edx>,
        wchar_t **a2@<ecx>,
        struct _UNICODE_STRING a3,
        unsigned __int16 **a4,
        unsigned __int16 **a5)
{
  int v7; // edi
  wchar_t *v8; // eax
  wchar_t *v9; // eax

  v7 = -1073741668;
  if ( a3.Buffer )
  {
    if ( a2 )
    {
      if ( a1 )
      {
        v8 = _wcschr(a3.Buffer, 0x23u);
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
  return v7;
}
