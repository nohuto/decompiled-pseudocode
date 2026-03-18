/*
 * XREFs of ?SetFloatProperty@CScaleTransformMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x1C0033C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CScaleTransformMarshaler::SetFloatProperty(
        DirectComposition::CScaleTransformMarshaler *this,
        int a2,
        float a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx

  result = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 == 1 )
        {
          if ( *((float *)this + 21) != a3 )
          {
            *((_DWORD *)this + 4) |= 0x400u;
            *((float *)this + 21) = a3;
            goto LABEL_10;
          }
        }
        else
        {
          return 3221225485LL;
        }
      }
      else if ( *((float *)this + 20) != a3 )
      {
        *((_DWORD *)this + 4) |= 0x200u;
        *((float *)this + 20) = a3;
LABEL_10:
        *a4 = 1;
      }
    }
    else if ( *((float *)this + 19) != a3 )
    {
      *((_DWORD *)this + 4) |= 0x100u;
      *((float *)this + 19) = a3;
      goto LABEL_10;
    }
  }
  else if ( *((float *)this + 18) != a3 )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((float *)this + 18) = a3;
    goto LABEL_10;
  }
  return result;
}
