/*
 * XREFs of ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180089430
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180036718 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z @ 0x18041E974 (-UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z.c)
 */

void __fastcall JointResize::OnSizeConstraintsQueried(
        JointResize *this,
        struct IUnknown *a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  if ( *((_BYTE *)this + 137) )
  {
    if ( (unsigned int)SHIsSameObject(a2, *((struct IUnknown **)this + 14)) )
    {
      *((_BYTE *)this + 137) = 0;
      JointResize::UpdateSizeConstraints((JointResize *)((char *)this - 88), a3, a4);
    }
  }
}
