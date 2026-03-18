/*
 * XREFs of ?ValidateIFIMETRICS@@YG_NPAU_IFIMETRICS@@@Z @ 0xE01BE
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z @ 0xE00D8 (-CaptureUsermodeParameters@QueryFontRequest@@UAEXPAX@Z.c)
 * Callees:
 *     _lambda_a395fd6b1cf218aca28c9236d01e099f_::operator() @ 0xE037A (_lambda_a395fd6b1cf218aca28c9236d01e099f_--operator().c)
 *     _lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator() @ 0xE03BA (_lambda_9956bef0b3c0130b24ee88b606a5fd75_--operator().c)
 *     _lambda_da407dd1077aed8e58ccf102ea4f1592_::operator() @ 0xE03FE (_lambda_da407dd1077aed8e58ccf102ea4f1592_--operator().c)
 */

char __thiscall ValidateIFIMETRICS(_DWORD *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // edi
  unsigned int v6; // eax
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v15; // ebx
  _DWORD *v16; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v17; // [esp+10h] [ebp-8h] BYREF
  _DWORD *v18; // [esp+14h] [ebp-4h] BYREF

  v17 = this;
  v18 = &v17;
  if ( (unsigned __int8)lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator()(this[2])
    && (unsigned __int8)lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator()(this[3])
    && (unsigned __int8)lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator()(this[4])
    && (unsigned __int8)lambda_9956bef0b3c0130b24ee88b606a5fd75_::operator()(this[5]) )
  {
    v2 = this[1];
    v18 = &v17;
    if ( !v2 )
      goto LABEL_18;
    if ( v2 >= 8 )
    {
      v3 = this[47];
      if ( !v3 || (unsigned __int8)lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v3, 24) )
      {
        v4 = 0;
        if ( v2 >= 0x10 )
        {
          v5 = this[49];
          if ( v5 )
          {
            if ( !(unsigned __int8)lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v5, 8) )
              return 0;
            v6 = *(_DWORD *)((char *)this + v5 + 4);
            v16 = (_DWORD *)v6;
            if ( v6 > 0x10 )
              return 0;
            if ( !(*(_DWORD *)((char *)this + v5) == 134248052
                 ? lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v5, 140)
                 : (unsigned __int8)lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v5, 4 * v6 + 8)) )
              return 0;
            v4 = v16;
          }
          else
          {
            v4 = 0;
          }
        }
        if ( v2 < 0x14
          || (v15 = this[50]) == 0
          || (unsigned __int8)lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v15, 40 * (_DWORD)v4 + 8)
          && *(_DWORD **)((char *)this + v15 + 4) == v4 )
        {
LABEL_18:
          v8 = this[6];
          if ( !v8
            || (unsigned __int8)lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v8, 12)
            && ((v16 = &v17, (v10 = *(_DWORD *)((char *)this + v8)) == 0)
             || (unsigned __int8)lambda_da407dd1077aed8e58ccf102ea4f1592_::operator()(&v16, v10, v9))
            && ((v11 = *(_DWORD *)((char *)this + v8 + 4)) == 0
             || (unsigned __int8)lambda_da407dd1077aed8e58ccf102ea4f1592_::operator()(&v16, v11, v9))
            && ((v12 = *(_DWORD *)((char *)this + v8 + 8)) == 0
             || (unsigned __int8)lambda_da407dd1077aed8e58ccf102ea4f1592_::operator()(&v16, v12, v9)) )
          {
            v13 = this[10];
            if ( !v13 || (unsigned __int8)lambda_a395fd6b1cf218aca28c9236d01e099f_::operator()(&v18, v13, 16) )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
