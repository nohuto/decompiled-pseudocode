/*
 * XREFs of ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x180020950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B9244 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CPropertySet::NotifyCurrentPropertyValues(CPropertySet *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  v2 = 0LL;
  v3 = a2;
  if ( a2 )
  {
    while ( 1 )
    {
      if ( (v3 & 1) != 0 && (unsigned int)v2 < *((_DWORD *)this + 26) )
      {
        v6 = CPropertySet::NotifyPropertyValue(
               this,
               (unsigned int)v2,
               *(unsigned int *)(*((_QWORD *)this + 10) + 8 * v2));
        if ( v6 < 0 )
          break;
      }
      v2 = (unsigned int)(v2 + 1);
      v3 >>= 1;
      if ( !v3 )
        return 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1FAu, 0LL);
  }
  return 0LL;
}
